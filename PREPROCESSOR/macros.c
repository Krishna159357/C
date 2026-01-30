// macros and macros function
#include<stdio.h>
# define pi 3.14159265359//pi ka value define kar diye
#define area(r) (pi*r*r) // area(r) defines kar diya area 
int main(){
printf("%.11f\n",pi);//.11 refers decimal ke baad utna digit jana hai
printf("%f",area(4));
return 0;
}
