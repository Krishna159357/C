#include<stdio.h>
void prime(int *n){
       printf("THe factors of %d\n",*n);
    for(int i=1;i<=*n;i++){
        if(*n%i==0){
            printf(" %d ",i);
            printf("\n");
        }
        
    }
    return;
}

int main(){
 int n,m;
 printf("Enter n:");
 scanf("%d",&n);
 printf("Enter m:");
 scanf("%d",&m);
 prime(&n); 

 prime(&m);

    return 0;
}