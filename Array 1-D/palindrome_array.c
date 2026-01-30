#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[n-1-i];
    }
    int k=1;
    for(int i=0;i<=n-1;i++){
       if(arr[i]!=brr[i]){
        k=0;
        break;
    }
    }
    if(k==1){
        printf("Array is palindrome");
    }
    else 
    printf("array is not palindrome");
    
    
    return 0;
}