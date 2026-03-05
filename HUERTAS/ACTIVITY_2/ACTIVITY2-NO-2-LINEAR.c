// Linear No. 2
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    system("cls");
    char guess;
    int index = -1;

    printf("Enter a letter (A-Z): ");
    scanf("%c", &guess);
    guess = toupper(guess);

    // Linear search
    for (int i = 0; i < 26; i++) {
        if ('A' + i == guess) {
            index = i;
            break;
        }
    }

    // output result
    index != -1 ? printf("Found '%c' at index %d\n", guess, index) : printf("Not Found\n");
    return 0;
}