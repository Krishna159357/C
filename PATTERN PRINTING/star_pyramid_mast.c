//     1
//    121
//   12321
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         int a=1;
//         for(int k=1;k<=i;k++){
//             printf("%d",a);
//             a++;
        
//         }
                   
//                 for(int m=1;m<=i-1;m++){
//                     printf("%d",a-2);
//                     a--;
//                 }
            
        
//         for(int l=1;l<=n-i;l++){
//             printf(" ");
        
//         }
//         printf("\n");
//     }
//     return 0;
// }


//    A
//  A B A
//A B C B A
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int a=65;
        for(int k=1;k<=i;k++){
             char ch =(char)a;
            printf("%c",a);
            a++;
        
        }
                   
                for(int m=1;m<=i-1;m++){
                    printf("%c",a-2);
                    a--;
                }
            
        
        for(int l=1;l<=n-i;l++){
            printf(" ");
        
        }
        printf("\n");
    }
    return 0;
}