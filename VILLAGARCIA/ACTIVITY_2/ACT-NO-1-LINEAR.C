#include <stdio.h>
int main()
{

  int arr[50];
  int n = 50;
  int search, i;
  int found = 0;

  for (int i = 0; i < 101; i++)
  {
    arr[i] = 50 + i;
  }
  printf("Input a number: ");
  scanf("%d", &search);
  for (i = 0; i < n; i++)
  {

    if (arr[i] == search)
    {
      found = 1;
      printf("Found in Index %d", i);
    }
  }
  if (found == 0)
  {
    printf("Not found");
  }

  return 0;
}