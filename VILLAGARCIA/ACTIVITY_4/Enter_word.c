#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{

  char word[100];
  float num;
  printf("Enter a Word: ");
  scanf("%s", word);
  word[0] = toupper(word[0]);
  printf("The capital of word is: %s", word);
  printf("\nLength of the word: %d\n", strlen(word));

  printf("\nEnter Number: ");
  scanf("%f", &num);
  printf("The square is: %.2f", sqrt(num));

  return 0;
}