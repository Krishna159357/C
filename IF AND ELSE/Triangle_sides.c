#include<stdio.h>
int main(){
    int a,b,c;//Allare distinct
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&a+c>b){
        printf("It form a triangle");
    }
    else
    printf("It  does not form a triangle");
    return 0;
}