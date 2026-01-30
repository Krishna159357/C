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
                // i.e jaha string end ho jyga
    if(strcmp(str,ktr)==0){
        printf("It is palindrome");
    }
    else{
    printf("It is not palindrome");
    }
             
    return 0;
}
// str[i] is '\0' (the null terminator of the original string).
// ktr[i] is also '\0' (the null terminator you added).
// Since '\0' == '\0' is always true,i.e str[i]==ktr[i] always true
//  it always prints "It is palindrome",
//   even for non-palindromes like "hello".
// therefore we use strcmp(str1,str2)==0 