#include<stdio.h>
 void binaryser(int arr[]);
 void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    binaryser(arr);
 }
 void binaryser(int arr[]){
    int start=0,end=8,mid=0,i;
   int  value=1;
   for(i=0;i<9;i++){
    mid=(start+end)/2;
    if(arr[mid]>value){
        end=mid-1;
    }
    else if(mid<value){
        start=mid+1;
    }
   }     
            printf("%d",mid);
        
 }