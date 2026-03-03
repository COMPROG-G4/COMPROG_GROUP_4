#include <stdio.h>

int main()
{
  long arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int sum = 0;
  for (int i = 0; i < 15; i++)
  {
    sum += arr[i];
  }
  {
    printf("The sum of the array is: %d\n", sum);
  }
  return 0;
}