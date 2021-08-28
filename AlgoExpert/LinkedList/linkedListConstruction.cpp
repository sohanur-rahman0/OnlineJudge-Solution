#include<bits/stdc++.h>
using namespace std;
//incomplete

struct Node {
    int value;
    Node *prev;
    Node *next;
};

class List {
private:
    Node *head, *tail;
public:
    List() {
        head = NULL;
        tail = NULL;
    }
    void addFront(int d) {
        Node *t = new Node();
        t->value = d;
        t->prev = NULL;
        t->next = tail;

        if(head == NULL) {
            tail = t;
        } else {
            head->prev = t;
        }
        head = t;

    }

    void addEnd(int d) {
        Node *t = new Node();
        t->value = d;
        t->prev = tail;
        t->next = NULL;

        if(tail == NULL) {
            head = t;
        } else {
            tail->next = t;
        }

        tail = t;
    }

    void addBefore() {}
    void addAfter() {}
    void addAtPosition() {}
    void remove() {}

    void forwardPrint() {
        Node *t = new Node();
        t = head;
        while(t!=NULL) {
            cout<<t->value<<" ";
            t = t->next;
        }
        cout<<endl;
    }

    void backwardPrint() {
        Node *t = new Node();
        t = tail;
        while(t!=NULL) {
            cout<<t->value<<" ";
            t = t->prev;
        }
        cout<<endl;
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
    List newList = List();
    for(int i=0; i<n; i++) {
        cin>>t;
        if(i==0)newList.addFront(t);
        if(i==1)newList.addEnd(t);
    }

    newList.forwardPrint();
    newList.backwardPrint();
}