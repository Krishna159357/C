 //break statement is use to stop the loop

// #include<stdio.h>
// int main(){
//     int n,a=1;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//            a=0;
//             break;
//         }
        
//     }
//     if(a==1){
//         printf("It is prime");
//     }
//     else
//         printf("It is not prime");
    

//     return 0;
// }


//continue statement is use to skip that given condition

#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            continue;//pass kar dena
        }
        printf("%d\n",i);
    }
   
return 0;
}