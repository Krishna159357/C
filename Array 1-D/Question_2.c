//In array multiply odd index by 2 increase even by 10.

#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(i%2==0){
            printf("%d ",10+arr[i]);
        }
        else
        printf("%d ",arr[i]*2);
    }
    return 0;
}