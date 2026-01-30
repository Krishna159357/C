//Difference of sum of even and odd elememts
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<=n-1;i++){
        if(i%2==0){
            sum1=sum1+arr[i];
        }
        
        else
        sum2=sum2+arr[i];
       
    }
    int Difference=sum1-sum2;
    printf("The difference is %d",Difference);
    return 0;
}