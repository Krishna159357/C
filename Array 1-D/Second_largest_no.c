#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(k<arr[i]){
            k=arr[i];
        }
    }
    int P=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(P<arr[i]&&k!=arr[i]){
            P=arr[i];
        }
    }
    printf(" The second max is %d",P);
    return 0;
}