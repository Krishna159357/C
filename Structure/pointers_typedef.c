#include<stdio.h>
typedef int* p;
int main(){
    int a=5,b=4;
    //int *x=&a,*y=&b; /*correct*/
    // int* x=&a,y=&b; /* wrong bcoz int* x=&a , int y=&b*/
    p x=&a,y=&b;  /* correct int*=p; p=&a , p=&b*/
    printf("%p\n",x);
    printf("%p\n",y);
    printf("%d\n",*x);
    printf("%d",*y);
}