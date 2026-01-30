#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        if(i%2!=0){
        for(int j=1;j<=i;j++){
            
            char ch=(char)a;
            printf("%c ",a);
            a=a+1;
        }

        }
        else
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");//ek baar hi line change hoga last me
    }
    return 0;
}