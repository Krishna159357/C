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
        scanf("%d",&arr[i]);
    }
     int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
        count++;
        }
    }
    printf("The no. are greater than %d is %d",x,count);
    return 0;
    
}