// #include<stdio.h>
// int main(){
//     int  n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int r=0;
//     while(n!=0){
//          r=r*10;
//        r=r+n%10;
       
//     n=n/10;
//     }
//     printf("The reverse is %d",r);
//     return 0;
// }

//Another way

#include<stdio.h>
int main(){
    int  n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=n;
    int r=0;
    while(n!=0){
        
       r=r+n%10;
        r=r*10;
       
    n=n/10;
    }
    int b=r/10;
    if(b==a){
        printf("It is palindrome");
    }
    else 
    printf("it is not palindrome");
    //printf("The reverse is %d",r/10);
    return 0;
}

