// number of pair whose sum equals to given no.x
//Count the number of elements in given array is greater than the given no. x
#include<stdio.h>
int main(){
    int n,x;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of x:");
    scanf("%d",&x);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);//arr[0],arr[1]....arr[n-1] store ho gya
    }
     int count=0;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
        if(arr[i]+arr[j]==x){
        count++;
        printf("(%d , %d)\n",arr[i],arr[j]);
        }
    }
    }
    printf("The no. of pair is %d",count);
    return 0;
    
}