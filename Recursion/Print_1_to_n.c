#include<stdio.h>
void forward(int a,int n){
    
    if (a>n)
    return;//function khtm ho gya   
    printf("%d\n",a);
      return forward(a+1,n);
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    forward(1,n);
    return 0;
}


/*After recursive call*/

// #include<stdio.h>
// void forward(int n){
//     if (n==0)
//     return;//function khtm ho gya 
//      forward(n-1);
//      printf("%d\n",n);
//      return;
// }
// int main(){
//     int n;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     forward(n);
//     return 0;
// }