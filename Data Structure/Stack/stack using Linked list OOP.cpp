#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
    Node *top;
public:
    Stack()
    {
        top=nullptr;
    }
    void push(int x)
    {
        Node *t;
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
        Node *t;
        if(top==nullptr)
        {
            cerr<<"Stack is Empty"<<endl;
        }
        else
        {
            t = top;
            top = top->next;
            t->next = NULL;
            delete t;
        }

    }

    bool isEmpty()
    {
        return top ? true : false;
    }
    void peek()
    {
        if(top==nullptr)cerr<<"Empty Stack"<<endl;
        else{
            cout<<top->data<<endl;
        }
    }


    void Display()
    {
        Node *t;
        t = top;
        while(t!=0)
        {
            cout<<t->data<<" ";
            t = t->next;
        }
        cout<<endl;
    }


};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.Display();
    st.peek();

}
