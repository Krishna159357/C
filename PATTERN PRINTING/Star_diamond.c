#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        int a = (n + 1) / 2, b = (n - 1) / 2;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a - i; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }
            for (int l = 1; l <= a - i; l++)
            {
                printf(" ");
            }
            printf("\n");
        }
        for (int i = b; i >= 1; i--)
        {
            for (int j = 1; j <= a - i; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }
            for (int l = 1; l <= a - i; l++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("Diamond is not possible");
    return 0;
}