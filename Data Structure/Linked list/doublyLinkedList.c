#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
   char str[50];
	
   struct node *next;
   struct node *prev;
};

//this link always point to first Link
struct node *head = NULL;

//this link always point to last Link 
struct node *last = NULL;

struct node *current = NULL;

//is list empty
bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;
	
   for(current = head; current != NULL; current = current->next){
      length++;
   }
	
   return length;
}


//display the list from last to first
void displayBackward() {

   //start from the last
   struct node *ptr = last;
	
   
	
   while(ptr != NULL) {    
	
      //print data
      printf("(%d,%d,%s) ",ptr->key,ptr->data, ptr->str);
		
      //move to next item
      ptr = ptr ->prev;
      
   }
	
}

//insert link at the first location
void insertFirst(int key, int data, char *str) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
   strcpy(link->str, str);

   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //update first prev link
      head->prev = link;
   }

   //point it to old first link
   link->next = head;
	
   //point first to new first link
   head = link;
}

//insert link at the last location
void insertLast(int key, int data, char *str) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
   strcpy(link->str, str);
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //make link a new last link
      last->next = link;     
      
      //mark old last node as prev of new link
      link->prev = last;
   }

   //point last to new last node
   last = link;
}



//delete link at the last location

struct node* deleteLast() {
   //save reference to last link
   struct node *tempLink = last;
	
   //if only one link
   if(head->next == NULL) {
      head = NULL;
   } else {
      last->prev->next = NULL;
   }
	
   last = last->prev;
	
   //return the deleted link
   return tempLink;
}

//delete a link with given key

struct node* delete(int key) {

   //start from the first link
   struct node* current = head;
   struct node* previous = NULL;
	
   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {
      //if it is last node
		
      if(current->next == NULL) {
         return NULL;
      } else {
         //store reference to current link
         previous = current;
			
         //move to next link
         current = current->next;             
      }
   }

   //found a match, update the link
   if(current == head) {
      //change first to point to next link
      head = head->next;
   } else {
      //bypass the current link
      current->prev->next = current->next;
   }    

   if(current == last) {
      //change last to point to prev link
      last = current->prev;
   } else {
      current->next->prev = current->prev;
   }
	
   return current;
}

bool insertAfter(int key, int newKey, int data, char *str) {
   //start from the first link
   struct node *current = head; 
	
   //if list is empty
   if(head == NULL) {
      return false;
   }

   //navigate through list
   while(current->key != key) {
	
      //if it is last node
      if(current->next == NULL) {
         return false;
      } else {           
         //move to next link
         current = current->next;
      }
   }
	
   //create a link
   struct node *newLink = (struct node*) malloc(sizeof(struct node));
   newLink->key = newKey;
   newLink->data = data;
   strcpy(newLink->str, str);

   if(current == last) {
      newLink->next = NULL; 
      last = newLink; 
   } else {
      newLink->next = current->next;         
      current->next->prev = newLink;
   }
	
   newLink->prev = current; 
   current->next = newLink; 
   return true; 
}

void main() {
   insertFirst(1,200, "abc");
   insertFirst(2,300, "def");
   insertFirst(3,250, "ghij");
   insertLast(4,350,"xyz");
   deleteLast();
   insertAfter(2,8,150,"foo");
    delete(3);
   printf("\n");
   
   displayBackward();
}