#include<stdio.h>
int main(){
    int n,s=0,k;
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
                s=1;
                break;
            }
        }
    }
    if(s==1){
        printf("The repeating no. is %d",k);
    }
    else printf("All no. are distinct");
    return 0;
}