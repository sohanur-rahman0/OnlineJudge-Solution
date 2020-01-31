#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}
void printReverse(Node *head)
{
    if(head == NULL)
        return;

    printReverse(head->next);
    cout<<head->data<<" ";
}
void push(Node **head_ref, int new_data)
{
    Node *new_Node = new Node();
    new_Node->data = new_data;
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void insertAfter(Node *prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        cerr<<"the given previous node can not be NULL"<<endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    head = new Node;
    second = new Node;
    third = new Node;
    head->data = 3;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 9;
    third->next = NULL;

    push(&head,10);
    push(&head,15);
    insertAfter(head->next,100);
    append(&head,200);

    printList(head);
    printReverse(head);

}
