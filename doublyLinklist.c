#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype{
int info;
struct node *next;
struct node *prev;
}node;
void createEmptyList(node **head,node **tail){
    *head=*tail=NULL;
}
void traverseInOrder(node *head)
{
      while(head!=NULL){
        printf("%d",head->info);
        head=head->next;
      }
}
void traverseInRev(node *tail){
while(tail!=NULL){
    printf("%d",tail->info);
    tail=tail->prev;
}
}
void InserInBeginning(node **head,node **tail,int item){
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL){
        ptr->next=ptr->prev= NULL;
        *head=*tail=ptr;
    }
    else{
        ptr->prev=NULL;
        ptr->next=*head;
        (*head)->prev=ptr;
        *head=ptr;
    }
}
ensertAtEnd(node **head,node **tail,int item){
    node*ptr;
    ptr=(node*)malloc(sizeof(node));
}