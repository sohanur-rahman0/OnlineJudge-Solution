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
    int data;
    Node *next;
};

class LinkedList {
private:
    Node *head, *tail;
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n) {
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;

        if(head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = tail->next;
        }
    }

    void print() {
        Node *temp = new Node;
        temp = head;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void removeDuplicateSorted() {
        Node *current = new Node;
        Node *nextNode = new Node;
        current = head;

        while(current->next!=NULL) {
            if(current->data == current->next->data) {
                nextNode = current->next->next;
                free(current->next);
                current->next = nextNode;
            } else {
                current = current->next;
            }
        }

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
    cin>>n;
    LinkedList list;
    for(int i=0; i<n; i++) {
        cin>>t;
        list.add_node(t);
    }
    list.print();
    cout<<endl;
    list.removeDuplicateSorted();

    list.print();
}