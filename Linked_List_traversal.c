#include <stdio.h>
#include <stdlib.h>

// Defining a Linked List
struct Node
{
    int data; /*data of node*/
    struct Node *next; /*pointer of each node*/
};

// visting and dispalying it
int Traversal(struct Node *head){

    /*making a node just to display every node in linked list*/
    struct Node *temp;

    /*precaution if linked list is not created*/
    if (head->next==NULL)
    {
        printf("Memory not allocated");
        return -1;
    }

    /*linking temp to head to iterate over the list*/
    temp=head;
    while (temp != NULL)
    {
        printf("Data:%d\n",temp->data);
        temp=temp->next;
    }
    
    
};


int main(){

    // defining node
    struct Node *head;
    struct Node *first;
    struct Node *second;

    // assigning memory in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));

    /*setting data*/
    head->data=10;
    first->data=20;
    second->data=30;

    /*setting pointer*/
    head->next=first;
    first->next=second;
    second->next=NULL;

    Traversal(head);
};