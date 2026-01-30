// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter no. of rows:");
//     scanf("%d",&r);
//     printf("Enter no. of columns:");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }                                             
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     int min_row=0;
//     int max_row=r-1;
//     int min_col=0;
//     int max_col=c-1;
//     int count=0;
//     int tne=r*c;//total no. of elements
//    // count<tne; is necessary otherwise 
//    // second last element print extra in last
//     while(count<tne){
//     for(int i=min_col;i<=max_col && count<tne;i++){
//         printf("%d ",arr[min_row][i]);
//         count++;
//     }
//     min_row++;
//     for(int i=min_row;i<=max_row && count<tne;i++){
//         printf("%d ",arr[i][max_col]);
//         count++;
//     }
//     max_col--;
//     for(int i=max_col;i>=min_col  && count<tne;i--){
//         printf("%d ",arr[max_row][i]);
//         count++;
//     }
//     max_row--;
//     for(int i=max_row;i>=min_row  && count<tne;i--){
//         printf("%d ",arr[i][min_col]);
//         count++;
//     }
//     min_col++;
// } 
//     return 0;
// }

/*Take square matrix of order n and fill elements from 1 to n^2*/
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows:");
    scanf("%d",&r);
    printf("Enter no. of columns:");
    scanf("%d",&c);
    int arr[r][c];
    int k=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=k;
            k++;
        }
    }                                             
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int min_row=0;
    int max_row=r-1;
    int min_col=0;
    int max_col=c-1;
    int count=0;
    int tne=r*c;//total no. of elements
    //count<tne; is necessary otherwise 
    //second last element print extra in last
    while(count<tne){
    for(int i=min_col;i<=max_col && count<tne;i++){
        printf("%d ",arr[min_row][i]);
        count++;
    }
    min_row++;
    for(int i=min_row;i<=max_row && count<tne;i++){
        printf("%d ",arr[i][max_col]);
        count++;
    }
    max_col--;
    for(int i=max_col;i>=min_col  && count<tne;i--){
        printf("%d ",arr[max_row][i]);
        count++;
    }
    max_row--;
    for(int i=max_row;i>=min_row  && count<tne;i--){
        printf("%d ",arr[i][min_col]);
        count++;
    }
    min_col++;
} 
    return 0;
}