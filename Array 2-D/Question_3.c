#include<stdio.h>
int main(){
      int r,c;
      int i1,j1,i2,j2;

      printf("Enter no. of rows:");
      scanf("%d",&r);
      printf("Enter no. of columns:");
      scanf("%d",&c);
      printf("Enter i1:");
      scanf("%d",&i1);
      printf("Enter j1:");
      scanf("%d",&j1);
      printf("Enter i2:");
      scanf("%d",&i2);
      printf("Enter j2:");
      scanf("%d",&j2);
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
      
      int sum=0;
      for(int i=i1;i<=i2;i++){
        for(int j=j1;j<=j2;j++){
           sum=sum+arr[i][j]; 
        }
      }
        printf("The sum of rectangular elements are %d",sum);
      
    return 0;
}