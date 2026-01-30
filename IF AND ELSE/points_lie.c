#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter value of x1:");
    scanf("%d",&x1);
    printf("Enter value of y1:");
    scanf("%d",&y1);
    printf("Enter value of x2:");
    scanf("%d",&x2);
    printf("Enter value of y2:");
    scanf("%d",&y2);
    printf("Enter value of x3:");
    scanf("%d",&x3);
    printf("Enter value of y3:");
    scanf("%d",&y3);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1=m2){
        printf("lie on the same line");
    }
    else
    printf("Do not lie on the line");
   return 0;
}