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
      int min_row=0;
    int max_row=r-1;
    int min_col=0;
    int max_col=c-1;
    int sum=0;
// similar like spiral printing
    for(int i=min_col;i<=max_col;i++){
        sum+=arr[min_row][i];
    }
    for(int i=min_row+1;i<=max_row;i++){
        sum+=arr[i][max_col];
    }
    for(int i=max_col-1;i>=min_col;i--){
        sum+=arr[max_row][i];
    }
    for(int i=max_row-1;i>=min_row+1;i--){
        sum+=arr[i][min_col];
    }
    printf("The sum of border elements %d",sum);
    
    return 0;
}