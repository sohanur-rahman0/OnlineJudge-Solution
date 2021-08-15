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
    // void insert(int value, Node *leaf) {

    //     if(value < leaf->value) {
    //         if(leaf->left != NULL) {
    //             insert(value, leaf->left);
    //         } else {
    //             cout<<"p insert left>> "<<value<<endl;
    //             leaf->left = new Node;
    //             leaf->left->value = value;
    //             leaf->left->left = NULL;
    //             leaf->left->right = NULL;
    //         }
    //     } else if(value >= leaf->value) {
    //         if(leaf->right!=NULL) {
    //             insert(value, leaf->right);
    //         } else {
    //             cout<<"p insert right>> "<<value<<endl;
    //             leaf->right = new Node;
    //             leaf->right->value = value;
    //             leaf->right->left = NULL;
    //             leaf->right->right = NULL;
    //         }
    //     }
    // }

public:
    binaryTree() {
        root = NULL;
    }

    // ~binaryTree() {
    //     destroyTree(root);
    // }

    // void insert(int value) {
    //     if(root!=NULL) {
    //         insert(value, root);
    //     } else {
    //         root = new Node;
    //         root->value = value;
    //         root->left = NULL;
    //         root->right = NULL;
    //     }
    // }

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

    void preOrder() {
        // Node *temp = root;
        // cout<<"PreOrder called"<<endl;
        preOrderHelper(root);
    }

    void preOrderHelper(Node *node) {
        // cout<<"PreOrderHelper called"<<endl;
        if(node==NULL)return;
        cout<<node->value<<" ";
        preOrderHelper(node->left);
        preOrderHelper(node->right);
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

    vi branchSum() {
        vi sums;
        branchSumHelper(root, 0, sums);
        return sums;
    }

    void branchSumHelper(Node *node,int currSum, vi &sums) {
        if(node==NULL)return;
        int newSum = currSum + node->value;
        if( node->left == NULL && node->right == NULL) {
            // cout<<newSum<<" <<newSum"<<endl;
            sums.pb(newSum);
            return;
        }

        branchSumHelper(node->left, newSum, sums);
        branchSumHelper(node->right, newSum, sums);

    }

    // void destroyTree(Node *leaf) {
    //     destroyTree(leaf->left);
    //     destroyTree(leaf->right);
    //     delete leaf;
    // }

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

    vi ans = tree.branchSum();

    for(auto it:ans) {
        cout<<it<<" ";
    }
}