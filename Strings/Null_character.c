// '\0' is a null character having ascii value 0. 
   // '\0' is itself is a   character

   // #include<stdio.h>
// int main(){
//     char arr[]="Hi kk\0";
//     int i=0;
//     while(arr[i]!='\0'){
//     printf("%c",arr[i]);
//     i++;
//     }
//     return 0;
// }

/*Agar '\0' nahi denge to computer by default '\0' de deta hai*/
// wo dikhta nahi hai, bas only character array ke liye //

// #include<stdio.h>
// int main(){
//     char arr[]="Hi kk";//only "sentence" ke liye '\0' aata hai
//     int i=0;
//     while(arr[i]!='\0'){
//     printf("%c",arr[i]);
//     i++;
//     }
//     return 0;
// }

/*If character ka value jyda likh denge then*/
// we know that Hi kk ka size 6 hai but agr 6 se jyda likh denge
// then koi error nahi aayaga bcoz jha sentence end hoga 
// wahi pe '\0' by default aa jyga (spaces nahi lega)

// #include<stdio.h>
// int main(){
//     char arr[12]="Hi kk";//only "sentence" ke liye '\0' aata hai
//     int i=0;
//     while(arr[i]!='\0'){
//     printf("%c",arr[i]);
//     i++;
//     }
//     return 0;
// }

// Modification

#include<stdio.h>
int main(){
    char arr[]="Hi kk";
    arr[3]='s';
    int i=0;
    while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
    }
    return 0;
}

