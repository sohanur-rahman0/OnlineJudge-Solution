#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*Head;

void creat(int A[],int n)
{
    struct Node *t,*last;
    Head = new Node;
    Head->data =  A[0];
    Head->next = Head;
    last = Head;
    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }

}
void Display(struct Node *h)
{
    do
    {
        cout<<h->data<<" ";
        h = h->next;
    }
    while(h!=Head);
    cout<<endl;
}
void RDisplay(struct Node *p)
{
    static bool flag = false;
    if(p!=Head || flag==false)
    {
        flag = true;
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}
int Length(struct Node *p){
    int len = 0;
    do{
        len++;
        p=p->next;
    }while(p!=Head);
    return len;
}
void Insert(struct Node *p,int index,int element)
{
    struct Node *t;
    if(index<0 || index>Length(p))return;
    if(index==0)
    {
        t = new Node;
        t->data = element;
        if(Head==nullptr)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while(p->next!=Head)
                p=p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else{
        for(int i=0; i<index-1; i++)p=p->next;
        t = new Node;
        t->data = element;
        t->next = p->next;
        p->next = t;
    }
}

void Delete(struct Node *p, int index)
{
    if(index<0 || index>Length(Head))return;
    struct Node *q;
    if(index == 1){
        while(p->next!=Head)p=p->next;
        if(p==Head){
            delete Head;
            Head = NULL;
        }
        else{
            p->next = Head->next;
            delete Head;
            Head = p->next;
        }

    }
    else{
        for(int i=0; i<index-2; i++)p=p->next;
        q = p->next;
        p->next = q->next;
        delete q;

    }
}
int main()
{
    int A[] = {5,10,15,20};
    creat(A,4);
    Insert(Head,4,25);
    Insert(Head,0,30);
    Delete(Head,2);
    Display(Head);
    RDisplay(Head);

}
