#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 struct node {
    struct node *pre,*next;
    int info;
 };

 typedef struct nodde Node;

 void insert_f_dll(Node **s,**l)
 {
    Node *p,*temp;
    p=(Node *)malloc(sizeof(Node));
    
    printf("\nEnter info value : ");
    scanf("%d",&p->info);
    p->prev=p->next=NULL;

    if(*s==NULL){
        *s=*l=p;
    }
    else {
        temp=*s;
        temp->pre=p;
        p->next=temp;
        *s=p;
    }
 }

 void delete_f_dll(Node **s,**l)
 {
    Node *p,*temp;
    if(*s==NULL) {   
        printf("\nDLL is empty !!");
        return;
        }
    p=*s;
    temp=p->next;
    x=p->info;    
    if(p->next==NULL && p->pre=NULL ){
        *s=*l=NULL;
    }
    else {
        temp->pre=p_pre;
        *s=temp;
    }
    printf("\nDeleted element is %d",x);
    free(p);
 }

 void display(Node **s)
 {
    Node *p;
    p=*s;
    if(*s==NULL){
        printf("\nDLL is empty ...");
    }
    else{
        printf("\n Dll Data are as follows : ");
        while(p!=NULL) {
            printf("%d <=> ",&p->info);
            p=p->next; 
        }
    }
 }

int main()
{
    Node *Start,*Last;
    Last = NULL;
    Start=NULL;
    int ch;
    while(1)
    {
        printf("\n1.INSERT at front \n2.DELETE at front \n3.DISPLAY\n4.Exit \n\n\tEnter Operation : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_f_dll(&Start,&Last);
            break;
        case 2:
            delete_f_dll(&Satrt,&Last);
            break;
        case 3:
            display(&Start);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nYou have Entered wrong choice !!");
        }
    }
}