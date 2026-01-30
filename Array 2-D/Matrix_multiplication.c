/*Matrix multiplication */
 /*no.of columns of matrix 1=no.of rows of matrix 2*/
 /*c1=r2*/
 //* new matrix after multiply is order of r1 x c2*// 

 // multiply like (arr[i][0]*brr[0][j]+arr[i][1]*brr[1][j].....so..on
 #include<stdio.h>
  int main(){
      int r1,c1,r2,c2,s;
      printf("Enter no. of rows:");
      scanf("%d",&r1);
      printf("Enter no. of columns:");
      scanf("%d",&c1);
      printf("Enter no. of rows:");
      scanf("%d",&r2);
      printf("Enter no. of columns:");
      scanf("%d",&c2);
      if(c1==r2){
      printf("Matrix 1 elements:\n");
      int arr[r1][c1];
      for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }                          
      }
        printf("Matrix 2 elements:\n");
      int brr[r2][c2];
      for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&brr[i][j]);
        }                          
      }
      printf("Matrix 1:\n");
      for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",arr[i][j]);
        }   
        printf("\n");                       
      }
      printf("\n");

      printf("Matrix 2:\n");
      for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",brr[i][j]);
        }   
        printf("\n");                       
      } 
      printf("\n");
      int res[r1][c2]; //int res[r1][c2]=0; is wrong bcoz 
      // not predefined 2D array;we take from user.
      for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           res[i][j]=0;  //that's why here we put zero
          for(int k=0;k<r2;k++){
             res[i][j]+=arr[i][k]*brr[k][j];

          }
          
        }
        printf("\n");
      } 
       printf("Multiplied matrix is\n");
      for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
          printf("%d ",res[i][j]);
        }
        printf("\n");
      }
      } 
      else
      printf("Matrix multiplication is not possible");    
    return 0;
}