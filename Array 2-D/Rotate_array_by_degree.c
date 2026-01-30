/*Roatate by 180 degree*/
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
//       for(int i=c-1;i>=0;i--){
//         for(int j=0;j<r;j++){
//              printf("%d ",arr[i][j]);//j and i ka position change
//         }
//         printf("\n");
//       }
    
//     return 0;
// }

/*Rotate by 90 degree*/
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
      printf("Original matrix:\n");
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }   
        printf("\n");                       
      }
      printf("\n");
      for(int i=0;i<c;i++){
        for(int j=r-1;j>=0;j--){
             printf("%d ",arr[j][i]);//j and i ka position change
        }
        printf("\n");
      }
    
    return 0;
}

/*Rotate by 270 degree*/

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
//       for(int i=c-1;i>=0;i--){
//         for(int j=0;j<r;j++){
//              printf("%d ",arr[j][i]);//j and i ka position change
//         }
//         printf("\n");
//       }
    
//     return 0;
// }