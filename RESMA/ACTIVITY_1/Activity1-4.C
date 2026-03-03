#include <stdio.h>
int main()
{
  float arr[2] = {3.14159265358979323846, 2.71828182845904523536};
  for (int i = 0; i < 2; i++)
  {
    printf("\n%.2f", arr[i]);
  }
  return 0;
}