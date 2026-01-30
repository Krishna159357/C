//write a program to print marks of 4 students along with roll no.
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
            scanf("%d",&arr[i][j]);//scanf("%d") is correct
        }                          //scanf("%d ") is wrong
      }
      printf("\n");
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }

    return 0;
}