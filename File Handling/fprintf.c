/*DELETE the existing things in file*/
/*insert the new string*/
#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr=NULL; //creating file pointer
    char str[500];
    gets(str);
    ptr=fopen("pk.txt","w");
    fprintf(ptr,"%s",str);// file me store kr liya
    printf("code executed");
    return 0;
}
/*if file does not exist it will create new one*/
