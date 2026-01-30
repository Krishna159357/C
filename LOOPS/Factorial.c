// #include<stdio.h>
// int main(){
//     int n,fact=1;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     if(n<0){
//         printf("Factorial of nagative no. is not possible");
        
//     }
//     else{
//     for(int i=n;i>=1;i--){
//     fact=fact*i;

//     }
//     printf("The factorial of %d is %d",n,fact);
//     }
//     return 0;
// }

//calculate factorial of first n numbers:

#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of nagative no. is not possible");
        
    }
    else{
    for(int i=1;i<=n;i++){
    fact=fact*i;
    printf("The factorial of %d is %d\n",i,fact);

    }
    }
    return 0;
}