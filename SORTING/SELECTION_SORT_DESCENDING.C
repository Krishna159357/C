#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){ 
         int s=INT_MIN;
         int min_idx;
        for(int j=i;j<n;j++){
            if(s<arr[j]){
               s=arr[j];
               min_idx=j;
            }
        }
        int temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
    }

    printf("\n");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}