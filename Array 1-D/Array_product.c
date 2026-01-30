#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
   int k=1;
    for(int i=0;i<=n-1;i++){
        k=k*arr[i];
    }
    printf(" The product is %d", k);
    return 0;
}