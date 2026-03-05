// Binary No. 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int arr[50], guess, low = 0, high = 49, mid;

    for (int i = 0; i < 50; i++) {
        arr[i] = i + 50;
    }

    printf("Enter a number between 50 and 99: ");
    scanf("%d", &guess);

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == guess) {
            break;
        }
        else if (arr[mid] < guess) {
                low = mid + 1;
            
        } else {
            high = mid - 1;
        }
    }

    arr[mid] == guess ? printf("Found at index %d\n", mid) : printf("Not found\n");
    return 0;

}