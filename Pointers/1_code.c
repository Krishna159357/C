/*poiters is a var. which stores the address of another var.*/
/*&--> address(altu faltu value aaata hai)*/
/*To show address we use %p like %c,%f,%d*/

#include<stdio.h>
int main(){
    int A=10;
    int *b=&A;  //ghuma ke kaan pakadna other variable ka use
    int **c=&b;
    printf("%p\n",b); //A ka address  //all address are different
    printf("%p\n",&b);//b ka address
    printf("%p\n",&A); //sidha kaan pakadna
    printf("%d\n",A);//A ka value
    printf("%d\n",b);//garbage value
    printf("%d\n",*b);//jis variable ka address bta rha uska value
    printf("%p",c);//b ka address
    return 0;
}