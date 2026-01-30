#include<stdio.h>
int sum(int n){
    if (n==0){
    return;
    }//function khtm ho gya 
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    sum(n);
    int Add=sum(n);
printf("%d",Add);
    return 0;
}