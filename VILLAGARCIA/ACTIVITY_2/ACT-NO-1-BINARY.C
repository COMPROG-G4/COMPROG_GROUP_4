
#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  int arr[50], guess, low = 0, high = 49, mid;

  for (int i = 0; i < 50; i++)
    arr[i] = i + 50;

  printf("Enter a number (50-100): ");
  scanf("%d", &guess);

  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if (arr[mid] == guess)
      break;
    if (arr[mid] < guess)
      low = mid + 1;
    else
      high = mid - 1;
  }

  arr[mid] == guess ? printf("Found at index %d\n", mid) : printf("Not found\n");

  return 0;
}
