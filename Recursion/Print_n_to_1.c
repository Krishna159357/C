#include<stdio.h>
void rev(int n){
    if (n==0)
    return;//function khtm ho gya   
    printf("%d\n",n);
      return rev(n-1);
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    rev(n);
    return 0;
}