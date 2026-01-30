#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=x;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r:");
    scanf("%d",&r);
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
   float ncr=nfact/(rfact*nrfact);
printf("%.2f",ncr);

    return 0;
}