// swapping using temporary variable
// #include<stdio.h>
// int main(){
//     int a,b,s;
//      printf("Enter a,b:");
//      scanf("%d%d",&a,&b);
//      s=a;
//      a=b;
//      b=s;
//      printf("a is %d\nb is %d",a,b);
//     return 0;
// }

/*swapping without using temporary variable*/
#include<stdio.h>
 
int main(){
    int a,b;
     printf("Enter a,b:");
     scanf("%d%d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("a is %d\nb is %d",a,b);
    
    return 0;
}