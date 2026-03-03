#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int arr[10], max = 0;
  srand(time(NULL));

  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 100 + 1;
    printf("%d ", arr[i]);
    if (arr[i] > max)
      max = arr[i];
  }

  printf("\nMax: %d\n", max);
  return 0;
}
// hahaha