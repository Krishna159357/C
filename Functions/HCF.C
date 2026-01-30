#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return a;
    }
    else
    return b;
}
int main(){
    int n,m,p;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter m:");
    scanf("%d",&m);
    int k=min(m,n);
    for(int i=1;i<=k;i++){
        if(n%i==0 && m%i==0){
     p=i;
    
        }
        
    }
    printf("The hcf is %d",p);
   
    return 0;
}