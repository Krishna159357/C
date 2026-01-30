// #include<stdio.h>
// int main(){
//     int LD, n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0;
//     while(n!=0){
//     LD=n%10;
//     sum=sum+LD;
//     n=n/10;
//     }
//     printf("The sum of digits are %d",sum);
//     return 0;
// }


// //sum of even digits

#include<stdio.h>
int main(){
    int LD, n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        LD=n%10;
        if(LD%2==0){
            sum=sum+LD;
        
        }
    
    
    n=n/10;
    }
    printf("The sum of digits are %d",sum);
    return 0;
}


