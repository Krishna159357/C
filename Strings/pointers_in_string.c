// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="krishna kant rawani";
//     printf("%p\n",str);//& ka jrurt nhi h string ka address me
//     printf("%p\n",&str[0]);//adrress of 'k'=address of that string
//       char *ptr=str;
//       *ptr='s';//address of first elememt=address of string
//       puts(ptr); 
//     return 0;
// }

/*print string using pointers*/
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[1000];
//     gets(str);
//     char *ptr=str;//another way to initialize a string
//     //int i=0; does not use of i here in pointers
//     while(*ptr!=0){  //pointers already include whole string
//         printf("%c",*ptr);
//         ptr++;
//        // i++;
//     }
//     return 0;
// }


// /*we can only modify individual character using string*/
// #include<stdio.h>
// #include<string.h>
//  int main(){
//     char str[100];
//     gets(str);
//     str[0]='k';
//     str[1]='r';
//     str[2]='i';
//     str[3]='s';
//     str[4]='h';
//     puts(str);
//     return 0;
//  }


/*we can only  modify whole string using pointers*/
#include<stdio.h>
#include<string.h>
 int main(){
    char str[100];
    gets(str);
    char *ptr=str;
    ptr="kk";
    puts(ptr);
     return 0;
 }
//null terminator ka condition dalne ka jrurt nhi ptr me
// kyuki pura string ka address hi copy ho gya
 // ye ptr koi new string nhi hai
//or ek baat str ko gets se liye the jisme null terminator included hai
  // same address se ptr hai isiliye null terminator nhi diye