#include<stdio.h>
int main(){
    int P,T;
    float R,SI;
    printf("Enter principal=");
    scanf("%d",&P);
    
    printf("Enter rate=");
    scanf("%f",&R);
   
    printf("Enter Time(in years)=");
    scanf("%d",&T);
   
    SI=P*R*T/100;
    
    printf("Simple interest is= %f",SI);
    printf("Total amount is= %f",P+SI);
    return 0;
}