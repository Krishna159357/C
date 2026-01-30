#include<stdio.h>
int main(){
    int n,a=2;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
         
        printf("%d\n",a);
        a=a*2;
    }
    return 0;
}
