// /*Wave printing horizontally*/

// #include<stdio.h>
// int main(){
//       int r,c;
//       printf("Enter no. of rows:");
//       scanf("%d",&r);
//       printf("Enter no. of columns:");
//       scanf("%d",&c);
//       int arr[r][c];
//       for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }                          
//       }
//       printf("Original matrix:\n");
//       for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }   
//         printf("\n");                       
//       }
//       printf("\n");
//       for(int i=0;i<r;i++){
//         if(i%2==0){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//       }
    
//     else{
//     for(int j=c-1;j>=0;j--){
//             printf("%d ",arr[i][j]);
//         }
//     }
//       }
    

//     return 0;
// }

/*Wave printing vertically*/

#include<stdio.h>
int main(){
      int r,c,a=0;
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
      printf("Original matrix:\n");
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }   
        printf("\n");                       
      }
      printf("\n");
      for(int j=0;j<c;j++){
        if(j%2==0){
        for(int i=r-1;i>=0;i--){
        printf("%d ",arr[i][j]);
        }
    }
    else{    
    for(int i=0;i<r;i++){
            printf("%d ",arr[i][j]);
        }   
    }
 }
    return 0;
}
