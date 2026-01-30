#include<stdio.h>
int main(){
    char str[1000];
    puts("Enter string:");
    gets(str);
    int k;
    printf("Inserting character index:");
    scanf("%d",&k);
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;

    }
for(int i=size;i>=k;i--){
    str[i+1]=str[i];// ek ek index shift ho jyga
}
   str[k]='S';
   puts(str);
    return 0;
}