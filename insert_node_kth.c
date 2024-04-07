#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

int getListSize(struct node *q) {
    int size=0;
    while(q!=NULL) {
        q=q->next;
        size++;
    } return size;
}

void insert_pos(struct node **q ,int data ,int k) {
    int size =getListSize(*q);
    
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->next=NULL;

    if(k<0||k>size)
    printf("\nInvalied position is inserted !! ");
    else if(k==0) {
            p->next=*q;
            *q=p; 
        }
        else {
            struct node *temp=*q;
            while (--k)
            temp=temp->next; 
            p->next= temp->next;
            temp->next=p;
        }
}

void display_list(struct node *q) {
    printf("\n Linked List :   ");
    while(q!=NULL) {
        printf("%d  ",q->data);
        q=q->next;
    }
}

int main() {
    struct node *head=NULL;
    struct node *n1=NULL;
    struct node *n2=NULL;
    struct node *n3=NULL;
    struct node *n4=NULL;
   
    n1=(struct node *)malloc(sizeof(struct node));
    n2=(struct node *)malloc(sizeof(struct node));
    n3=(struct node *)malloc(sizeof(struct node));
    n4=(struct node *)malloc(sizeof(struct node));
    
    head=n1;
    n1->data=10;
    n1->next=n2;

    n2->data=20;
    n2->next=n3;

    n3->data=30;
    n3->next=n4;

    n4->data=40;
    n4->next=NULL;

    // int k;
    // printf("Enter kth position node no. :\t");
    // scanf("%d",&k);

    display_list(head);
    
    insert_pos(&head, 55,2);   //k=2
    insert_pos(&head,45,0);         //k=0
    insert_pos(&head,67,5);        //k=5
    insert_pos(&head,89,7);         //k=7
    insert_pos(&head,99,9);         //k=7
    
    display_list(head);
    return 0;
}