// printf() = puts()
// scanf() = gets()

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="KRISHNA KANT RAWANI"; //str[] ka size ka jrurt nahi
//     printf("%s\n",str);     // agar " characters" denote krge
//     puts(str); // it can also be use in place of printf 
//     puts("KK");// acts as a printf but only characters
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//      char str[100];
//      scanf("%s",str);// %s is use to avoid loop
//  //address store & is not use in scanf if we use string function and %s
//      printf("%s",str);
//     return 0;
// }

// %s krke agar koi string ko input lenge then first word only print
// phla word read krke space dekh leta hai to read krna band kr deta hai

//To avoid these type of problem we use gets
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char kk[25];
    scanf("%[^\n]s",str);
    //gets(str); // null terminated automatically included
    puts("The output is ");
    puts(str);// puts ka property hota hai 
      // agr continous me 2 puts ya puts ka baad gets statement aayga 
      //Automatically \n ka property lg jyga i.e line change
    return 0;
}

//gets automaically null terminated included rkhta hai
//isiliye gets ke baad puts krnge to hmko null terminate krne ka jrurt nhi
// if gets ka use nahi kiye to null terminate krna hoga

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char str[5]={'k','r','i','s','h'};
  
//      str[5]='\0'; //null terminating condition in another way
//     puts(str);
   
//     return 0;
// }

//but if we not use null terminating condition
//it will garbage value after last alphabet 
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char str[5]={'k','r','i','s','h'};
//     puts(str);//but if we use str[6] it will not give garbage
//     return 0;//i.e  no. of character se jyda use krna hai 
// }

/* if we use*/
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char str[100];
//     gets(str);
//       //null terminating condition already included in gets
//     puts(str);
   
//     return 0;
// }