//pascal's triangle using combination
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=x;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int pas(i,j){
    int ncr=factorial(i)/(factorial(j)*factorial(i-j));
     return ncr;
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-2/2;j++){
             //int icj=pas(i,j);
            printf(" ");

        }
        for(int k=1;k<=i+1;k++){
             int icj=pas(i,j);
            printf("%d",icj);
            j++;
        }
        for(int l=0;l<=n-2/2;l++){
            printf(" ");

        }
        printf("\n");
    }
    
    return 0;
}
