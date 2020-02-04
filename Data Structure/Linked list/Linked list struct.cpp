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
    while(p!=0){
        if(key==p->data)
            return p;
        p = p->next;
    }
    return nullptr;
}
int main()
{
    int A[] = {2, 3, 6,25, 7, 5, 8, 10,};
    creat(A,7);
    Display(first);
    DisplayRecursive(first);
    cout<<endl;
    cout<<countNode(first)<<endl;
    //cout<<countNodeRecursive(first)<<endl;
    cout<<"Sum: "<<Sum(first)<<endl;
    //cout<<"Sum: "<<SumRecursive(first)<<endl;
    cout<<"Max: "<<Max(first)<<endl;
    cout<<"Min: "<<Min(first)<<endl;

}
