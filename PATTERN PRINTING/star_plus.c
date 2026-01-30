#include<stdio.h>
int main(){
    int n;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    if(n%2!=0){
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            if(i==(n+1)/2||j==(n+1)/2){
                printf(" * ");
            }
            else if(j!=(n+1)/2){
                printf("   ");
            }
           
        }
        printf("\n");
    }
}
else
printf("star is not possible");
    return 0;

}

