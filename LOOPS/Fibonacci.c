//1+1+2+3+5+8......(sum of 2 previous terms)
//1+2+3+4+5.....
// #include<stdio.h>
// int main(){
//     int n, a=1,b=1,sum=1;
//     printf("Enter nth term:");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b,b=sum;
        
//     }
//     printf("The value of nth term is %d",sum);


//     return 0;
// }

//print n fibonacci terms

#include<stdio.h>
int main(){
    int n, a=1,b=1,sum;
    printf("Enter nth term:");
    scanf("%d",&n);
    printf("1 1 ");
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b,b=sum;
    printf("%d ", sum);
        
    }


    return 0;
}

