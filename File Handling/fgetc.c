#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("kk.txt","r");
    char c=fgetc(ptr);

    printf("The contnet is %c\n",c);/*print first character of file*/
    c=fgetc(ptr);
    
    printf("The contnet is %c\n",c);/*print second character*/
    c=fgetc(ptr);
    
    printf("The contnet is %c",c);/*print third one and so..on*/
    fclose(ptr);
    return 0;
}