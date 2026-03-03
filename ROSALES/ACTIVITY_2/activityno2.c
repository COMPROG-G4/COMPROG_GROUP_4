#include <stdio.h>

int main() {
    char letters[26];
    char target;
    int i;

    // Create array A-Z using for loop
    for(i = 0; i < 26; i++) {
        letters[i] = 'A' + i;
    }

    // Ask user for input
    printf("Enter a letter (A-Z): ");
    scanf(" %c", &target);

    // Convert lowercase to uppercase (optional)
    if(target >= 'a' && target <= 'z') {
        target = target - 32;
    }

    // ----- Linear Search -----
    int linearIndex = -1;
    for(i = 0; i < 26; i++) {
        if(letters[i] == target) {
            linearIndex = i;
            break;
        }
    }

    // ----- Binary Search -----
    int low = 0, high = 25, mid;
    int binaryIndex = -1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(letters[mid] == target) {
            binaryIndex = mid;
            break;
        }
        else if(letters[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    // Display results
    if(linearIndex != -1)
        printf("Linear Search: Letter found at index %d\n", linearIndex);
    else
        printf("Linear Search: Letter not found.\n");

    if(binaryIndex != -1)
        printf("Binary Search: Letter found at index %d\n", binaryIndex);
    else
        printf("Binary Search: Letter not found.\n");

    return 0;
}