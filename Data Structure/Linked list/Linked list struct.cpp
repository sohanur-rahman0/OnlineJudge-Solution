#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=nullptr,*second=nullptr,*third=nullptr;

void create(int A[], int n)
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
void create2(int A[], int n)
{
    struct Node *t,*last;
    second = new Node;
    second->data = A[0];
    second->next = nullptr;
    last = second;
    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;

    }
}
void create3(struct Node *f)
{
    
    cin>>f->data;
    
    if(f->data==0){
        f->next = nullptr;
    }
    else{
        struct Node *t = new Node;
        f->next = t;
        creat(t);
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
void ReverseDisplay(struct Node *p)
{
    if(p!=nullptr)
    {

        ReverseDisplay(p->next);
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
//void Delete(struct node *p,int value){
//    struct node *q;
//    while(p->next!=0){
//         if(p->next->data==value){
//            p->next = p->next->next;
//            delete p->next;
//            break;
//         }
//        p=p->next;
//    }
//
//}

void Delete(struct Node *p,int index)
{
    struct Node *q;
    if(index==1)
    {
        q = first;
        first = first->next;
        delete q;
    }
    else
    {
        for(int i=0; i<index-1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
}
bool isSorted(struct Node *p)
{
    int prev = INT_MIN;
    while(p!=0)
    {
        if(p->data<prev)
        {
            return false;
        }
        prev = p->data;
        p = p->next;
    }
    return true;
}
void DuplicateRemove(struct Node *p)
{
    struct Node *q = p->next;
    while(q!=0)
    {
        if(p->data!=q->data)
        {
            p=q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
void Reverse1(struct Node *p)
{
    int *A,i=0;
    struct Node *q = p;
    A = new int[countNode(p)];
    while(q!=0)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    i--;
    q = p;
    while(q!=0)
    {
        q->data = A[i];
        i--;
        q = q->next;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q=nullptr,*r=nullptr;
    while(p!=0)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse3(struct Node *q, struct Node *p)
{
    if(p)
    {
        Reverse3(p,p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

void Concat(struct Node *p, struct Node *q)
{
    third = p;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = q;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;
    if(p->data < q->data)
    {
        last = third = p;
        p = p->next;
        third->next = nullptr;
    }
    else
    {
        last = third = q;
        q = q->next;
        third->next = nullptr;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next = p;
            last = p;
            p=p->next;
            last->next = nullptr;
        }
        else
        {
            last->next = q;
            last = q;
            q=q->next;
            last->next = nullptr;
        }

    }
    if(p)
        last->next = p;
    if(q)
        last->next = q;
}

bool isLoop(struct Node *f)
{
    struct Node *p,*q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q?q->next:NULL;
    }
    while(p && q && p!=q);
    return p==q ? true : false;
}
int main()
{
    int A[] = {2,3,4,8,27,38,40};
    int B[] = {10,20,30,40};
    create2(B,4);
    create(A,7);
    Display(first);
    //DisplayRecursive(first);
    //cout<<endl;
    // cout<<countNode(first)<<endl;
    //cout<<countNodeRecursive(first)<<endl;
    //cout<<"Sum: "<<Sum(first)<<endl;
    //cout<<"Sum: "<<SumRecursive(first)<<endl;
    //cout<<"Max: "<<Max(first)<<endl;
    //cout<<"Min: "<<Min(first)<<endl;
    //PushFront(1);
    //PushBack(111);
    //Insert(first,1,55);
    // SortedInsert(first,10);
    //Delete(first,2);
    // cout<<isSorted(first)<<endl;
    // DuplicateRemove(first);

    // ReverseDisplay(first);
    // Reverse3(NULL,first);
    cout<<endl;
    Display(second);
    cout<<endl;
    //Concat(first,second);
    Merge(first,second);
    Display(third);
    cout<<endl;
    cout<<isLoop(third);



}
