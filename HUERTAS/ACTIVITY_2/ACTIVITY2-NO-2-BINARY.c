// Binary No. 2
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for toupper

int main() {
    system("cls"); // Clear the console (Windows-specific)
    char guess;
    int low = 0, high = 25, mid;

    printf("Enter a letter between A and Z.\n");
    scanf(" %c", &guess);
    guess = toupper(guess); 

    while (low <= high) {
        mid = (low + high) / 2;
        if ('A' +  mid == guess) {
            break;
        }

        if ('A' + mid  < guess) {
             low = mid + 1;

        } else {
            high = mid - 1;
        }
    }

    'A' + mid == guess ? printf("Found '%c' at index %d\n", guess, mid) : printf("Not Found\n");    
    return 0;   
}
