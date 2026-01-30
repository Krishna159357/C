#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n%3==0||n%5==0){
        printf("It is divisible");
    }
    else
    printf("It is not divisible");
    return 0;
}