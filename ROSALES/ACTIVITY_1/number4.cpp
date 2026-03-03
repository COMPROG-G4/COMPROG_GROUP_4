#include <stdio.h>

int main() {
    // Initialize array from pi to e (approximately)
    float arr[] = {3.14, 3.05, 2.95, 2.85, 2.75, 2.72};
    int size = sizeof(arr) / sizeof(arr[0]);

    // to Print each element rounded to two decimal places
    for(int i = 0; i < size; i++) {
        printf("%.2f\n", arr[i]);
    }

    return 0;
}