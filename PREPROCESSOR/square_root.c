#include<stdio.h> /*#include is a preprocessor directive*/
#include<math.h>
int main(){
    int n; 
printf("Enter n:");
scanf("%d",&n);
float sr=sqrt(n);
printf("Square root %f",sr);
return 0;
}

/*stdio.h= standard input output header*/

/* int datatype = 4 bytes = 32 bits*/
// 2^32 options i.e each bit can store either 0 or 1
// range -2^16 to 2^16-1

/* long take 8 bytes = 64 bits*/
// 2^64 options
// range -2^32 to 2^32-1


