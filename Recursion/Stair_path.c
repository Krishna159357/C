//max 2 stair hi jump kr skte h


#include <stdio.h>
int stair(n)
{
   if(n==1)
   return 1;
   if(n==2)
   return 2;
    return stair(n-1)+stair(n-2);
}
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
     int r=stair(n);
    printf("%d", r);
    return 0;
}