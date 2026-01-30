#include <stdio.h>
#include <limits.h>
int main()
{
  int r, c, k, s;
  printf("Enter no. of rows:");
  scanf("%d", &r);
  printf("Enter no. of columns:");
  scanf("%d", &c);
  int arr[r][c];
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("The matrix are:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  int I_min_row;
  int I_min_column;
  k = INT_MAX;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (k > arr[i][j])
      {
        k = arr[i][j];
        I_min_row = i;
        I_min_column = j;
      }
    }
  }
  int I_max_row;
  int I_max_column;
  s = INT_MIN;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (s < arr[i][j])
      {
        s = arr[i][j];
         I_max_row = i;
         I_max_column = j;
      }
    }
  }
  printf("The smallest no. is %d\n", k);
  printf("Index of min is arr[%d][%d]\n", I_min_row, I_min_column);
  printf("The greatest no. is %d\n", s);
  printf("Index of max is arr[%d][%d]\n", I_max_row, I_max_column);
  return 0;
}