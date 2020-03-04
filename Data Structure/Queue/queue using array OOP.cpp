#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int size;
    int front;
    int back;
    int *Q;
public:
    Queue()
    {
        back = front = -1;
        size = 5;
        Q = new int[size];
    }
    Queue(int size)
    {
        back = front = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enqueue(int element)
    {
        if(back == size - 1)
            cerr<<"Queue is Full"<<endl;
        else
        {
            back++;
            Q[back] = element;
        }
    }

    void dequeue()
    {
        if(back==front)
            cerr<<"Queue is Empty"<<endl;
        else
        {
            front++;
        }
    }

    void Display()
    {
        for(int i=front+1; i<=back; i++)
            cout<<Q[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Queue q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.dequeue();
    q.Display();

}
