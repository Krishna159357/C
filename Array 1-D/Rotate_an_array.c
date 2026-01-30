#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        return;
    
}
void rev_of_last(int arr[],int n,int k){
    for(int i=k,j=n-1;i<j;i++,j--){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        return;
    
}

int main(){
    int n,k;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter value of k:");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    if(k<=n){
         reverse(arr,n);//Reverse an  whole array 
         reverse(arr,k);//Reverse an array from 0--> k-1 index no.
         rev_of_last(arr,n,k);// Reverse an array from k--> n-1 index no.
         for(int i=0;i<=n-1;i++){
            printf("[%d]",arr[i]);
         }
    }
    else if( k>n){
          k=k%n;
          reverse(arr,n);
         reverse(arr,k);
         rev_of_last(arr,n,k);
         for(int i=0;i<=n-1;i++){
            printf("[%d]",arr[i]);
         }
    }
    

    return 0;
}