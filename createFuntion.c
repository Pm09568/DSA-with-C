#include<stdio.h>
#include<stdlib.h>

 typedef struct student{
    int data;
    struct student *next;
}node;
void main()
{
   createlinklist();
}
node **head;
 void  createLinklist(node **head,int item){
  //   *head=NULL;    
  node *ptr;
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=item;
    if(*head==NULL)
       ptr->next=NULL;
    else   
      ptr->next=*head;
    *head=ptr;
 }

 
