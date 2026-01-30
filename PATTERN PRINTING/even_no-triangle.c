#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum=2;//dono for loopke bich me variable introduce krnge
        for(int j=1;j<=i;j++){
           printf("%d ",sum);
           sum=sum+2;           
        }
        
        printf("\n");
    }
    return 0;
}