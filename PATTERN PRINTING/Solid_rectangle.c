#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    printf("Enter no.of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");//har line ke baad line change krne  ke liye
    }
    return 0;
}