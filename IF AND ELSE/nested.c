// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no.:");
//     scanf("%d",&n);
//     if(n%3==0||n%5==0){
//         if(n%15!=0){
//             printf("It is divisible by 3 and 5 not by 15");
//         }
//             else
//             printf("It is divisible by 15");
        
//     }
//     else
//     printf("It is not divisible by 3 and 5");
//     return 0;
// }

//Another method
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if((n%3==0||n%5==0)&&n%15!=0){
        printf("It is divisible");
        
    }
    else
    printf("It is not divisible by 3 and 5");
    return 0;
}