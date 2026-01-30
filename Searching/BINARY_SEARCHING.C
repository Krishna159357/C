/*Binary searching is applicable for sorted elements*/

#include<stdio.h> 
int main(){
    int n,key;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter key:");
    scanf("%d",&key);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int start,end,mid;
    start=0;
    end=n-1;
    while(start<=end){
        mid=(start+end)/2;

        if(arr[mid]==key){
            printf("Element found at %d place",mid+1);
            break;
        }
        
        if(arr[mid]<key){
            start=mid+1;
        }

        if(arr[mid]>key){
            end=mid-1;
        }

    }
    return 0;
}