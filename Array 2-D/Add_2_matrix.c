#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows:");
    scanf("%d",&r);
    printf("Enter no. of columns:");
    scanf("%d",&c);
    int arr[r][c],brr[r][c];
    printf("For matrix 1\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("For matrix 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    
    printf("Additon of matrixes are:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            /*Either*/
            arr[i][j]=arr[i][j]+brr[i][j];
            printf("%d ",arr[i][j]);
             /*or*/
            //printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
