#include<stdio.h>
int main(){
    int n,key;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter key:");//no to be found
    scanf("%d",&key);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if (arr[i]==key){
        printf("Element is found at %d place",i+1);
        break;
        }
    }
    return 0;
}