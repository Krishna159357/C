#include<stdio.h>
int main(){
    int r;
    float pi=3.14156;
    printf("Enter yor radius:");
    scanf("%d",&r);

    float area=(4*pi*r*r*r)/3;
    printf("Volume is %f",area);
    return 0;
}