#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int a=65, b=1;
    char ch=(char)a;
    for(int i=1;i<=2*n+1;i++){
        printf("%c",a);
        a++;
        
        
    }
    printf("\n");
    
    for(int i=1;i<=n;i++){
        a=65;
        for(int k=1;k<=(n+1)-i;k++){
            printf("%c",a);
            a++;
            
        }
        
        for(int l=1;l<=b;l++){
            printf(" ");
        }
        b=b+2;
        
         a=65;
        for(int m=1;m<=(n+1)-i;m++){
            printf("%c",a);
            a++;
            
        }
      
        
        printf("\n");
    }
    return 0;
}