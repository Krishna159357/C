// /*square matrix only*/

#include<stdio.h>
int main(){
      int r,c;
      printf("Enter no. of rows:");
      scanf("%d",&r);
      printf("Enter no. of columns:");
      scanf("%d",&c);
      if(r==c){
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
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             printf("%d ",arr[j][i]);//j and i ka position change
        }
        printf("\n");
      }
    }
    else
    printf("Transpose is not possible");
    return 0;
}

/*matrix  transpose*/

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

//       printf("Original matrix\n");
//       for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }  
//         printf("\n") ;                       
//       }
//        printf("Inverted matrix\n");

//       for(int i=0;i<c;i++){//rows and column change loops me
//         for(int j=0;j<r;j++){
//              printf("%d ",arr[j][i]);/*j and i change*/
//         }
//         printf("\n");
//       }
//     return 0;
// }


/* TRANSPOSE WITH USE OF ANOTHER MATRIX*/

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

//       printf("Original matrix\n");
//       for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }  
//         printf("\n") ;                       
//       }
//        printf("Inverted matrix\n");
//        int brr[c][r];
//       for(int i=0;i<c;i++){//rows and column change loops me
//         for(int j=0;j<r;j++){
//              brr[i][j]=arr[j][i];/*j and i change*/
//         }
//       }
//       for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//       }
//     return 0;
// }