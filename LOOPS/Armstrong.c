// a number that equals the sum of its own digits,
// each raised to the power of total no of digits.
// 153=1^3 + 5^3 + 3^3

#include <stdio.h>
int main()
{
    int i, n, rem, sum = 0;
    i = 1;
    while (i <= 500)
    {

        
        rem = i % 10;
        sum = sum + (rem * rem * rem);
        i = i / 10;
        
        if (sum = i)
    {
        printf("The armstrong number is %d\n", sum);
    }
    }
    
    return 0;
}