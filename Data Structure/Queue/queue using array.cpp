#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int front;
    int back;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->back = -1;
    q->Q = new int[q->size];
}

void enqueue(struct Queue *q, int element)
{
    if(q->back == q->size - 1)
        cerr<<"Queue is Full"<<endl;
    else
    {
        q->back++;
        q->Q[q->back] = element;
    }
}

void dequeue(struct Queue *q)
{
    if(q->back==q->front)
        cerr<<"Queue is Empty"<<endl;
    else
    {
        q->front++;
    }
}

void Display(struct Queue q)
{
    for(int i=q.front+1; i<=q.back; i++)
        cout<<q.Q[i]<<" ";
    cout<<endl;
}
int main()
{
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    dequeue(&q);
    Display(q);
}
