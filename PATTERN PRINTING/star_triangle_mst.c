// #include<stdio.h>
// int main(){
//     int n,a=0;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//            printf(" ");
           
//         }
//         for(int k=1;k<=i;k++){//dono nested loops individual rhga.
//             printf("*");
//            }
//         printf("\n");
//     }
//     return 0;

// }

#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
           printf(" ");
           
        }
        for(int k=1;k<=i;k++){//dono nested loops individual rhga.
            printf("*");
           }
        printf("\n");
    }
    return 0;

}