#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  char guess;
  int low = 0, high = 25, mid;

  printf("Enter a letter (A-Z): ");
  scanf(" %c", &guess);

  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if ('A' + mid == guess)
      break;
    if ('A' + mid < guess)
      low = mid + 1;
    else
      high = mid - 1;
  }

  'A' + mid == guess ? printf("Found '%c' at index %d\n", guess, mid) : printf("Not found\n");

  return 0;
}