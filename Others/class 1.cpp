#include <stdio.h>
#include <stdlib.h>
#define STKMAX 10
#include<bits/stdc++.h>
using namespace std;
int Stack[STKMAX],top=-1;
void push(int item)
{
    if(top==9)
        printf("\nStack is full. Overflow Condition... \n");
    else
    {
        top=top+1;
        Stack[top]=item;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("Stack is empty. Underflow Condition");
    }
    else
    {
        int item =Stack[top];
        top=top-1;
        return item;
    }
}
void display()
{
    int i;
    printf("\nSTACK Contains:");
    for( i=0;i<=top;i++)
        printf("%d ",Stack[i]);

        cout<<endl;
}
int main()
{
    int n,value;
    cout<<"Enter 1 to push an element in the stack"<<endl;
    cout<<"Enter 2 to pop an element from the stack"<<endl;
    cout<<"Enter 3 to display elements from the stack"<<endl<<endl;


 while(true){
    cout<<"Enter 1,2 or 3 from the menu:"<<endl<<endl;
    cin>>n;
    switch(n){
    case 1:
        cout<<"Input what you want to push:";
        cin>>value;
        push(value);
        break;
    case 2:
        cout<<pop()<<endl;
        break;
    case 3:
        //cout<<"Display element:";
        display();
        break;
    default:
        cout<<"Incorrect Operation"<<endl;
        break;
    }
 }


    return 0;
}
