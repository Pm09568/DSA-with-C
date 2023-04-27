#include<stdio.h>
 int stack[100],choice=0,i,size,j,top=-1;
 void push();
 void pop();
 void show();
 void main()
 {
        printf("\t\tEnter the Size of the stack : ");
        scanf("%d",&size);
    while(choice != 4)
    {

        printf("\n\tenter 1 for push ");
        printf("\n\tenter 2 for pop");
        printf("\n\tenter 3 for show ");
        printf("\n\tenter 4 for exit");
        printf("\n\tEnter your Choice here : ");
        scanf("%d",&choice);

        switch(choice)
        {

         case 1: push();
         break;

         case 2: 
         pop();
         break;

         case 3:show();
         break;

         case 4:printf("exiting.....");
         break;

         default: printf("Plz select valid choice"); 
        }
    }   
 }
 void push(){
   int val;
   if(top==size){
    printf("Stack overflow");
   }
   else{
    printf("enter value");
    scanf("%d",&val);
    top=top+1;
    stack[top]=val;
   }
 }
 void pop(){
    if(top==-1){
        printf("stack empty!!!");
    }
    else{
        top=top-1;
    }
 }
 void show(){
     for(i=top;i>=0;i--){
        printf("%d \t",stack[i]);
     }
     if(top==-1){
        printf("Stack is empty");
     }
 }