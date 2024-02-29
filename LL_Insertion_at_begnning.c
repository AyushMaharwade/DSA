#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int Traversal(struct Node *head){

    struct Node * temp;
    if (head == NULL)
    {
        printf("List is empty");
        return -1;
    }

    temp=head;
    while (temp != NULL)
    {
        printf("data:%d\n",temp->data);
        temp=temp->next;
    };
    printf("\n");
}

// Insertion at the begnning of the linked list
struct Node * insert_at_beg(struct Node *head,int data){
    struct Node *ptr;

    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

int main(){

    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    first->data=15;
    second->data=20;
    third->data=25;

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;

    Traversal(head);
    head=insert_at_beg(head,5);
    Traversal(head);


};