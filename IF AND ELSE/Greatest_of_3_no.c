// #include<stdio.h>
// int main(){
//     int a,b,c;//Allare distinct
//     printf("Enter value of a:");
//     scanf("%d",&a);
//     printf("Enter value of b:");
//     scanf("%d",&b);
//     printf("Enter value of c:");
//     scanf("%d",&c);
//     if(a>b&&a>c){
//         printf("a is greatest");
//     }
//     if(b>c&&b>a){
//         printf("b is greatest");
//     }
//     if(c>b&&c>a){
//         printf("c is greatest");
//     }
// return 0;
// }

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is greatest");

        }
        else 
        printf("c is greatest");

    }
    if(b>c){
        if(b>a){
            printf("b is greatest");

        }
        

    }
    else
    printf("c is greatest");
    return 0;
}