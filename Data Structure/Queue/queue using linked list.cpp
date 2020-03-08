#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*front = NULL, *back = nullptr;

void enqueue(int element)
{
    struct Node *q = new Node;
    if(q==NULL)cerr<<"Queue is Full"<<endl;
    else{
        q->data = element;
        q->next = nullptr;
        if(front==nullptr){
            front = q;
            back = q;
        }else{
            back->next = q;
            back = q;
        }
    }
}

void dequeue()
{
    struct Node *q;
    if(front==NULL)cerr<<"Queue is Empty"<<endl;
    else{
        q = front;
        front = front->next;
        delete q;
    }
}

void Display()
{
    struct Node *p = front;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    Display();

}
