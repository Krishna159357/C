#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n>99&&n<1000){
        printf("It is 3 digit no.");
    }
    else
    printf("It is not a 3 digit no.");
    return 0;

}

