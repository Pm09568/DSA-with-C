#include<stdio.h>
#include<stdlib.h>

typedef struct empty{
    int data;
    struct empty *next;
}node;
node **head;
void createempty(node **head,int item){
    *head=NULL;
}