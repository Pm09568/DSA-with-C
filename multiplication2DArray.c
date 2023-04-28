#include<stdio.h>
 
 void main(){
    int i,j,k;
      int A[3][3];
      printf("enter Matrix A ");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
      }
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
      }
      int B[3][3];
      printf("enter Matrix B ");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
      }
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
      }
 
      int C[3][3];
      int sum=0;
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++)
          C[i][j]=A[i][k]*B[k][j];
        }
        //  C[i][j]=sum;
        //  sum=0;
      }
      printf("\nMATRIX IS = \n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
      }
 }