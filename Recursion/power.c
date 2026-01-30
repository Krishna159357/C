//double datatype is use for high values 
//%lf is use
/*BADA ANSWER ME GARBAGE VALUE DE DETA HAI*/
/*ISILIYE DOUBLE KA USE KRNGE*/

#include <stdio.h>
double pow(int a, int b)
{
    if (b == 1)
    {
        return 1;
    }
    return a * pow(a, b - 1);
}
int main()
{
    int a, b;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    double r=pow(a, b);
    printf("%.1lf", r);
    return 0;
}