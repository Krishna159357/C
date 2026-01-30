// find kth smallest no. that is (k-1) index
#include<stdio.h>
#include<limits.h>
int main(){
    int n,k,l;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<k;i++){ 
         int s=INT_MAX;
         int min_idx;
        for(int j=i;j<n;j++){
            if(s>arr[j]){
               s=arr[j];
               l=arr[j];
               min_idx=j;
            }
        }
         int temp=arr[i];
            arr[i]=arr[min_idx];
             arr[min_idx]=temp;
    }

    printf("\n");
    
    printf("%d",l);

    return 0;
}