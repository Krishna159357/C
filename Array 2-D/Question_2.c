/* store k at every index of matrix*/
#include<stdio.h>
int main(){
      int r,c,k;
      printf("Enter no. of rows:");
      scanf("%d",&r);
      printf("Enter no. of columns:");
      scanf("%d",&c);
      printf("Enter k::");
      scanf("%d",&k);
      int arr[r][c];
    
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=k;  //k=arr[i][j] is wrong
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }

    return 0;
}