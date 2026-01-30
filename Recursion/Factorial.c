#include<stdio.h>
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    if(n<=0){
        printf("The factorial of -ve no. is not possible");
    }
    else{
    int fact=factorial(n);
    printf("The factorial of %d is %d ",n,fact);
    }
    return 0;
}