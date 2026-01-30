// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     gets(str);
//     int i=0;
//     while(str[i]!='\0'){
//        i++;
//     }
//     for(int j=0,k=i-1;j<=k;j++,k--){//i-1 bcoz it is array always n-1 index
//         int temp=str[j];
//         str[j]=str[k];
//         str[k]=temp;

//     }
//     puts(str);
//     return 0;
// }

/*Reverse string with another string*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int i=0;
    while(str[i]!='\0'){
       i++;
    }
    char ktr[i];
    for(int j=0;j<=i-1;j++){
       ktr[j]=str[i-1-j];
    }
    ktr[i]='\0';//new string ban gya to null terminator add krna hoga 
    puts(ktr); // i.e jaha string end ho jyga

             
    return 0;
}