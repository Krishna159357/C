#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("kk.txt","r");
    char str[2];//here dimension doesnot matter
    fgets(str,60,ptr);/*syntax to read string*/
   /*str ke andar 60 characters print krnge ptr se leke*/
   
    printf("The contnet is %s",str);
    fclose(ptr);
    return 0;
}