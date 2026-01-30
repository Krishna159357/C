#include<stdio.h>
int main(){
    int a,b;
    char calci;
    printf("ENter a:");
    scanf("%d",&a);
    printf("ENter b:");
    scanf("%d",&b);
    printf("ENter operation:");//+,-,*,/
    scanf(" %c",&calci);
   
    switch(calci){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%f", (float)a/b);//Another way to covert into float
        break;                   // if already declared as int
        
    }


    
    return 0;
}