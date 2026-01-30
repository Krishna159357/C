#include<stdio.h>
int main(){
    int n,s,k;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                k=arr[i];
                break;
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=k){
            s=arr[i];
        }
     }
    
        printf("The unique no. is %d",s);
    return 0;
}