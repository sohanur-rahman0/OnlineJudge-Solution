#include<bits/stdc++.h>
using namespace std;
struct Node{
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
    do{
        cout<<h->data<<" ";
        h = h->next;
    }while(h!=Head);
    cout<<endl;
}
int main()
{
    int A[] = {5,10,15,20};
    creat(A,4);
    Display(Head);

}
