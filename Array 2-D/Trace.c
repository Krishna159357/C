#include<stdio.h>
int main(){
      int r,c;
      printf("Enter no. of rows:");
      scanf("%d",&r);
      printf("Enter no. of columns:");
      scanf("%d",&c);
      int arr[r][c];
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }                          
      }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
      int k=0;
       for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j||i+j==r-1){
                k+=arr[i][j];
            }
        }
    
      }
      printf("%d",k);
 
    return 0;
}