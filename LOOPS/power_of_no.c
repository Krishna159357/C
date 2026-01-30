#include<stdio.h>
int main(){
    int a,b,product=1;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
       product=product*a;
       
    }
    printf("%d",product);
    return 0;
}
