#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
 void creat_node(Node *next)
 {
     int item;
         cout<<"Enter data for node : ";
         cin>>next->data;
        if(next->data == 0){
            next->next=NULL;
         }
         else{
             Node *new_node = new Node;
             next->next=new_node;
             creat_node(new_node);
         }
}
void Display(Node *root){
    cout<<"Element of linked are : ";
    while(root != 0){
        cout<<root->data<<' ';
        root=root->next;
    }
}
int main()
{
    Node *n;
    n= (Node *)malloc (sizeof(Node));
    creat_node(n);
    Display(n);
    return 0;
}
