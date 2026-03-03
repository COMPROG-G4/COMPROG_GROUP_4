#include <stdio.h>

int main() {
    char letters[26];
    char input;
    int low = 0, high = 25, mid;
    int foundIndex = -1;
    int i;

   
    for(i = 0; i < 26; i++) {
        letters[i] = 'A' + i;
    }

   
    printf("Enter a letter (A-Z): ");
    scanf(" %c", &input);

    
    while(low <= high) {
        mid = (low + high) / 2;

        if(letters[mid] == input) {
            foundIndex = mid;
            break;
        }
        else if(letters[mid] < input) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    
    if(foundIndex != -1) {
        printf("Letter found at index: %d\n", foundIndex);
    } else {
        printf("Letter not found.\n");
    }

    return 0;
}