#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *S;
};

void creat(struct Stack *st)
{
    cout<<"Input Stack size:";
    cin>>st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void Display(struct Stack *st)
{
    for(int i=st->top; i>=0; i--)
        cout<<st->S[i]<<endl;

}

void push(struct Stack *st,int element)
{
    if(st->top == st->size-1)
        cerr<<"Stack Overflow"<<endl;
    else
    {
        st->top++;
        st->S[st->top]= element;
    }
}

void pop(struct Stack *st)
{
    if(st->top==-1)
        cerr<<"Stack Underflow"<<endl;
    else
    {
        st->top--;
    }
}

bool isEmpty(struct Stack *st)
{
    if(st->top == -1)
        return true;
    else
        return false;
}

bool isFull(struct Stack *st)
{
    if(st->top==st->size-1)
        return true;
    else
        return false;
}

int peek(struct Stack *st,int index)
{
    int x = -1;
    if(st->top-index<0){
        cerr<<"Invalid Index"<<endl;
        return x;
    }
    else
    {
        x = st->S[st->top-index+1];
        return x;
    }
}

int top(struct Stack *st)
{
    if(isEmpty(st))
        cerr<<"Empty Stack"<<endl;
    else
    {
        return st->S[st->top];
    }
}


int main()
{
    struct Stack st;
    creat(&st);
    push(&st,5);
    push(&st,10);
    push(&st,15);
    pop(&st);
     Display(&st);
    cout<<top(&st)<<endl;
    cout<<isEmpty(&st)<<endl;
    cout<<isFull(&st)<<endl;
    cout<<peek(&st,2)<<endl;



}
