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
    q->front = q->back = 0;
    q->Q = new int[q->size];
}

void enqueue(struct Queue *q, int element)
{
    if((q->back+1)%q->size == q->front)
        cerr<<"Queue is Full"<<endl;
    else
    {
        q->back = (q->back+1)%q->size;
        q->Q[q->back] = element;
    }
}

void dequeue(struct Queue *q)
{
    if(q->back==q->front)
        cerr<<"Queue is Empty"<<endl;
    else
    {
        q->front = (q->front+1)%q->size;
    }
}

void Display(struct Queue q)
{
    int i = q.front + 1;
    do{
        cout<<q.Q[i]<<" ";
        i = (i+1)%q.size;
    }while(i!=(q.back+1)%q.size);
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

