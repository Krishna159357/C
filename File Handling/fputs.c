// #include<stdio.h>
// int main(){
//     char str[1000];
//     FILE *ptr;
//     ptr=fopen("kk.txt","w");
//     gets(str);
//     fputs(str,ptr); //string taking as input
//     fclose(ptr);
//     return 0;
// }

#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("kk.txt","w");
    
    fputs("pre-defined",ptr); //pre_defined input
    fclose(ptr);
    return 0;
}