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

struct Node * insertatindex(struct Node * head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    int i=0;

    while (i != index-1)
    {
        temp=temp->next;
        i++;
    }
    ptr->data=data;
    ptr->next=temp->next;
    temp->next=ptr;
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
    head=insertatindex(head,18,2);
    Traversal(head);
}