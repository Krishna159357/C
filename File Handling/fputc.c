#include<stdio.h>
int main(){
    char ch='A';
    FILE *ptr;
    ptr=fopen("kk.txt","w");
    fputc(ch,ptr);/*fputc('A',ptr)*/ 
    fclose(ptr);
    return 0;
}