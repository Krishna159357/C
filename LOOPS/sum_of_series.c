// //1+2+3+4+5.....
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
        
//     }
//     printf("The summation is %d",sum);
//     return 0;
// }

//sum of squares of first n terms

//1+2+3+4+5.....
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i*i;
        
    }
    printf("The summation is %d",sum);
    return 0;
}

