#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*top=nullptr;

void push(int x)
{
    struct Node *t;
    t = new Node;
    if(t==NULL)
    {
        cerr<<"Stack is full"<<endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void pop()
{
    struct Node *t;
    if(top==nullptr){
        cerr<<"Stack is Empty"<<endl;
    }else{
        t = top;
        top = top->next;
        t->next = NULL;
        delete t;
    }

}

bool isEmpty()
{
    if(top==0)
        return true;
    else
        return false;
}
int top()
{
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void Display()
{
    struct Node *t;
    t = top;
    while(t!=0){
        cout<<t->data<<" ";
        t = t->next;
    }cout<<endl;
}
int main()
{
    push(5);
    push(10);
    push(15);
    push(20);
    pop();
    Display();

}

