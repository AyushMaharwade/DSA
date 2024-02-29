#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int Traversal(struct Node * head){
    struct Node *temp;
    if (head == NULL)
    {
        printf("list is empty");
        return -1;
    }
    temp=head;
    while (temp != NULL)
    {
        printf("data:%d\n",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

// Deletion of a node from the beggining of a linked list
// struct Node *Deletionatbeg(struct Node *head){
//     struct Node *temp=head;
//     head=head->next;
//     free(temp);
//     return head;
// }

// deletion of a node at the given index of a linked list
// struct Node *Deletionatindex(struct Node * head,int index){
//     struct Node * ptr = head;
//     struct Node * temp = head->next;
    
//     for (int i = 0; i < index-1; i++)
//     {
//         ptr=ptr->next;
//         temp=temp->next;
//     }
//     ptr->next=temp->next;
//     free(temp);
//     return head;
    
// }

// deletion os a node at the end of a linked list
struct Node *Deletionatend(struct Node *head){
    struct Node * ptr=head;
    struct Node * temp=head->next;

    while (temp->next != NULL)
    {
        ptr=ptr->next;
        temp=temp->next;
    }
    ptr->next=NULL;
    free(temp);
    return head;
}

int main (){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *first=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=20;
    first->data=35;
    second->data=40;
    third->data=55;
    fourth->data=85;

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    Traversal(head);
    // head=Deletionatbeg(head);
    // head=Deletionatindex(head,2);
    head=Deletionatend(head);
    Traversal(head);

}