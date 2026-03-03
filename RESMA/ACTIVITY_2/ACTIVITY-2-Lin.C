#include <stdio.h>

int main() {
    char letters[26];
    char input;
    int i, foundIndex = -1;

   
    for(i = 0; i < 26; i++) {
        letters[i] = 'A' + i;
    }

   
    printf("Enter a letter (A-Z): ");
    scanf(" %c", &input);

    
    for(i = 0; i < 26; i++) {
        if(letters[i] == input) {
            foundIndex = i;
            break;
        }
    }

   
    if(foundIndex != -1) {
        printf("Letter found at index: %d\n", foundIndex);
    } else {
        printf("Letter not found.\n");
    }

    return 0;
}