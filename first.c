#include<stdio.h>
 void array1d(int base,int w, int m);
 void array2drow(int base,int w,int n,int i,int j,int l1,int l2);
 void array2dcolumn(int base,int w,int m,int i,int j,int l1,int l2);
 void main ()
 {
    int base,m,n,w,i,j,l1,l2;
    int p;
    printf("enter 1 for 1d array :\n");
    printf("enter 2 for  rowwise 2d array\n");
    printf("enter 3 for column wise 2d array\n ");
     scanf("%d",&p);
     switch(p){
        case 1: array1d( base,w,m);
        break;
        case 2:array2drow(base,w,n,i,j,l1,l2);
        break;
        case 3: array2dcolumn(w,m,base,i,j,l2,l1);
        break;
        default :printf("not valid");
     }
 }
 void array1d(int base,int w,int m){
    printf("enter base ,w, m :");
    scanf("%d %d %d",&base,&w,&m);
    int loc=base + (w*m);
    printf("location is =  %d",loc);
 }
 void array2drow(int base,int w,int n,int i,int j,int l1,int l2){

 printf("enter base ,w, n,i,j,l1,l2 :");
    scanf("%d %d %d %d %d %d %d",&base,&w,&n,&i,&j,&l1,&l2);
    int loc=base +w*(n*(i-l1)+(j-l2));
    printf("%d",loc);
 }
 void array2dcolumn(int base,int w,int m,int i,int j,int l1,int l2){

 printf("enter base ,w, n,i,j,l1,l2 :");
    scanf("%d %d %d %d %d %d %d",&base,&w,&m,&i,&j,&l1,&l2);
    int loc=base +w *(m*(j-l2) +(i-l1));
    printf("%d",loc);
 }
    
 