#include<stdio.h>
int main(){
    int P,T;
    float R,SI;
    P=20000,R=4,T=2;
    SI=P*R*T/100;
    printf("SI is %f\n",SI);
    printf("TOtal amount is %f",P+SI);
    return 0;
}