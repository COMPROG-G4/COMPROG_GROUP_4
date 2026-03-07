#include <stdio.h>


int main() {
    // Initialize the array and variable //
    int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 25, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, key;
    int comparisons = 0;
    int swaps = 0;

    // Print unsorted array //
    printf("### Insertion Sort ###\n");
    printf("Unsorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }

    // Insertion Sort Logic //
    for (int i = 0; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Shift Elements Greater than Key to the Right //
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            comparisons++; // count each comparison here //
        }

        // Count the final comparison that exits the loop (if j >= 0) //
        if (j >= 0) {
            comparisons++;
        }
        arr[j + 1] = key;
        swaps++; // count the swap of key into its position //
        }

        // Print sorted array and metrics //
        printf("\nSorted Array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }   
        printf("\n\nComparisons: %d\n", comparisons);
        printf("\nSwaps: %d\n", swaps);

        return 0;
    }