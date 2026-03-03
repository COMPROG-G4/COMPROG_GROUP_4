#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  char arr[26], guess;

  for (int i = 0; i < 26; i++)
    arr[i] = 'A' + i;

  // printf("Array: ");
  // for (int i = 0; i < 26; i++)
  // printf("%c ", arr[i]);

  printf("\nEnter a letter (A-Z): ");
  scanf(" %c", &guess);

  if (guess >= 'a' && guess <= 'z')
  {
    guess = guess - 32;
  }

  int found = -1;
  for (int i = 0; i < 26; i++)
    if (arr[i] == guess)
    {
      found = i;
      break;
    }

  found != -1 ? printf("Found '%c' at index %d\n", guess, found) : printf("Not found\n");

  return 0;
}