//AP of 1,3,5,7.......

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i=i+2){
//         printf("%d\n",i);
//     }
//     return 0;
// }

//AP of 4,7,10....so.on
#include<stdio.h>
int main(){
    int n,a=4;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
         
        printf("%d\n",a);
        a=a+3;
    }
    return 0;
}
