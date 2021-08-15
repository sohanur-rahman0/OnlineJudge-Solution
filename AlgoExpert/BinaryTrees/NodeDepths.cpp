#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<string, string> dict;
typedef pair<int, int> pii;
typedef priority_queue<int, vector<int>, greater<int>> pq;

struct Node {
    int value;
    Node *left;
    Node *right;
};

class binaryTree {
private:
    Node *root;
public:
    binaryTree() {
        root = NULL;
    }

    ~binaryTree() {
        destroyTree(root);
    }

    void insert(int value) {
        // cout<<value<<endl;

        if(root==NULL) {

            root = new Node;
            root->value = value;
            root->left = NULL;
            root->right = NULL;
            return;
        }
        // Node *node = root;
        queue<Node*>q;
        q.push(root);
        // cout<<"after first push"<<endl;
        while(!q.empty()) {
            Node *current = q.front();
            q.pop();
            if(current->left == NULL) {
                // cout<<"left>>" <<value<<endl;
                current->left = new Node;
                current->left->value = value;
                current->left->left = NULL;
                current->left->right = NULL;
                return;

            } else if(current->right == NULL) {
                // cout<<"right>>" <<value<<endl;
                current->right = new Node;
                current->right->value = value;
                current->right->left = NULL;
                current->right->right = NULL;
                return;

            } else {
                q.push(current->left);
                q.push(current->right);
            }


        }
    }




    void levelOrder() {
        Node *temp = root;
        if(temp==NULL)return;
        queue<Node*> q;
        q.push(temp);
        while(!q.empty()) {
            Node *current = q.front();
            cout<<current->value<<" ";
            if(current->left != NULL) {
                q.push(current->left);
            }

            if(current->right!=NULL) {
                q.push(current->right);
            }

            q.pop();
        }
    }

    int NodeDepths() {
        return depthsHelper(root, 0);
    }

    int depthsHelper(Node *node, int depth) {
        if(!node)return 0;
        return depth + depthsHelper(node->left, depth+1) + depthsHelper(node->right, depth +1);
    }



    void destroyTree(Node *leaf) {
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
    }

};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,t;
    binaryTree tree;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>t;
        tree.insert(t);
    }

    cout<<tree.NodeDepths()<<endl;
}