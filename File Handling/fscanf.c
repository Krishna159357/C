/*fscanf is used to read the existing file*/
/*but as we now scanf for string only read first word*/
#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr=NULL; //creating file pointer
    char str[500];
    ptr=fopen("hk.txt","r");
    fscanf(ptr,"%s",str);// store kr liya only first element
    printf("The contnet of file %s\n",str);
    return 0;
}
