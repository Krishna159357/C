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
        for(int k=1;k<=2*i-1;k++){
            char ch=(char)a;
            printf("%c",a);
            a++;
        }
        for(int l=1;l<=n-i;l++){
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}