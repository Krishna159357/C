#include<stdio.h>
#include<limits.h>
int main(){
      int r,c,k,index;
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
      printf("\n");
      int s=INT_MIN;
      for(int i=0;i<r;i++){
         k=0; // k ka value dono loop ke beech me taki bas rows ka sum kare                  
        for(int j=0;j<c;j++){
            k=k+arr[i][j];
        }
        if(s<k){  /*max. value check wala condition*/
            s=k;
            index=i;
        }
      }
        printf("The maximum sum os row is %d\n",s);
        printf("The index of row is %d",index);

    return 0;
}                                 