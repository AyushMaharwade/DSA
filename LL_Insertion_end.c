#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

int Traversal(struct Node * head){
    struct Node *temp;
    if (temp->next==NULL)
    {
        printf("list is empty");
        return -1;

    }
    temp=head;
    while (temp != NULL)
    {
        printf("Data:%d\n",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct Node * insertatend(struct Node * head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *temp =head;

    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    ptr->data=data;
    temp->next=ptr;
    ptr->next=NULL;
    return head;

}

int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *first=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    first->data=15;
    second->data=20;
    third->data=25;

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;

    Traversal(head);
    head=insertatend(head,100);
    Traversal(head);
}