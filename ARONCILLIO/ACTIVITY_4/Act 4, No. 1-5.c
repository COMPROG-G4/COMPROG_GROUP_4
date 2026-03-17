#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
double num;
int length;

char text[50];

printf("Enter a word : %s", text);
scanf("%s", &text);
text[0] = toupper(text[0]);

printf("Enter a number : ");
scanf("%lf", &num);


length = strlen(text);
printf("Length : %d\n", length);
printf("Square root : %.2lf\n", sqrt(num));
printf("The capital of the word is : %s", text);
return 0;
}