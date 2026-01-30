#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int b=1;
    for(int i=1;i<=2*n+1;i++){
        printf("*");
        
        
    }
    printf("\n");
    
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=(n+1)-i;k++){
            printf("*");
            
        }
        
        for(int l=1;l<=b;l++){
            printf(" ");
        }
        b=b+2;
        
         
        for(int m=1;m<=(n+1)-i;m++){
            printf("*");
            
        }
      
        
        printf("\n");
    }
    return 0;
}