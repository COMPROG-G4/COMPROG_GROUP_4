#include <stdio.h>

int main()
{

  float arr[2] = {3.1415926535, 2.7182818284};
  for (int i = 0; i < 2; i++)
  {
    printf("%.2f\n", arr[i]);
  }
  return 0;
}