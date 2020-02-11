#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first;

void creat(int A[], int n)
{
    struct Node *t,*last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;
    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;

    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void DisplayRecursive(struct Node *p)
{
    if(p!=nullptr)
    {

        DisplayRecursive(p->next);
        cout<<p->data<<" ";
    }
}
int countNode(struct Node *p)
{
    int c=0;
    while(p!=nullptr)
    {
        c++;
        p = p->next;
    }
    return c;
}
int countNodeRecursive(struct Node *p)
{
    if(p==nullptr)
        return 0;
    else
        return countNodeRecursive(p->next)+1;
}
int Sum(struct Node *p)
{
    int s=0;
    while(p!=nullptr)
    {
        s+= p->data;
        p = p->next;
    }
    return s;
}
int SumRecursive(struct Node *p)
{
    if(p==nullptr)
        return 0;
    else
        return SumRecursive(p->next)+p->data;
}
int Max(struct Node *p)
{
    int m = p->data;
    p = p->next;
    while(p!=NULL)
    {
        if(p->data>m)
            m = p->data;
        p = p->next;
    }
    return m;
}
int Min(struct Node *p)
{
    int m = p->data;
    p = p->next;
    while(p!=NULL)
    {
        if(p->data<m)
            m = p->data;
        p = p->next;
    }
    return m;
}
Node *LinearSearch(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
            return p;
        p = p->next;
    }
    return nullptr;
}

void PushFront(int data)
{
    struct Node *t = new Node;
    t->data = data;
    t->next = first;
    first=t;
}
void Insert(struct Node *np,int pos,int data)
{
    if(pos<0 || pos>countNode(np))
        return;
    struct Node *t,*p;
    if(pos==0)
    {
        t = new Node;
        t->data = data;
        t->next = first;
        first=t;
    }
    else if(pos>0)
    {
        p = first;
        for(int i=0; i<pos-1 && p; i++)
        {
            p = p->next;
        }
        if(p)
        {
            t = new Node;
            t->data = data;
            t->next = p->next;
            p->next = t;
        }

    }
}

void SortedInsert(struct Node *p,int data)
{
    struct Node *q,*t;
    q = nullptr;
    t = new Node;
    t->data = data;
    if(first==nullptr)
        first = t;
    else
    {
        while(p && p->data<data)
        {
            q = p;
            p = p->next;
        }
        if(p==first)
        {
            t->next = first;
            first = t;

        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
void Delete(struct node *p,int value){
    struct node *q;
    while(p->next!=0){
         if(p->next->data==value){
            p->next = p->next->next;
            delete p->next;
            break;
         }
        p=p->next;
    }

}
int main()
{
    int A[] = {2,3,6,25,27,35,38,40};
    creat(A,7);
    Display(first);
    //DisplayRecursive(first);
    //cout<<endl;
    cout<<countNode(first)<<endl;
    //cout<<countNodeRecursive(first)<<endl;
    cout<<"Sum: "<<Sum(first)<<endl;
    //cout<<"Sum: "<<SumRecursive(first)<<endl;
    cout<<"Max: "<<Max(first)<<endl;
    cout<<"Min: "<<Min(first)<<endl;
    PushFront(1);
    //PushBack(111);
    //Insert(first,1,55);
    SortedInsert(first,10);
    Display(first);


}
