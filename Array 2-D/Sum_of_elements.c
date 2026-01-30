#include<stdio.h>
int main(){
      int r,c,k=0;
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
            k=k+arr[i][j];
        }
      }
        printf("The sum of elements is %d",k);

    return 0;
}