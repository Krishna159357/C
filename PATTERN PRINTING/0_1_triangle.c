#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(a==0){
                a=1;
            }
            else
            a=0;
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;

}