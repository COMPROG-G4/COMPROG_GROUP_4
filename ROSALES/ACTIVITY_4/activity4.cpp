#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main () {

    char word[50] = "" ;
    int n;

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Enter a number: ");
    scanf("%d", &n);

    word[0] = toupper(word[0]);
    printf("The word is: %s\n", word);
    printf("The square root of the number: %.2f\n",sqrt(n));

    return 0;
}