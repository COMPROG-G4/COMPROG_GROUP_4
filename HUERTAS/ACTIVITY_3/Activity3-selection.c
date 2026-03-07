#include <stdio.h>

// Prints all elements of an integer array //
void printArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// Holds swap and comparison counts from sorting //
typedef struct {
    int comparisons;
    int swaps;
} SortMetrics;

// performs selection sort on an array and returns the metrics //
SortMetrics selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    SortMetrics metrics = {0, 0}; // Initialize metrics //

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        metrics.comparisons++; // count the comparison of arr[j] with arr[min_idx] //

        for (j = i + 1; j < n; j++) {
            metrics.comparisons++; // count the comparison of arr[j] with arr[min_idx] //
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element //
        if (min_idx != i) {
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            metrics.swaps++; // count the swap of arr[i] with arr[min_idx] //
        }
    }
    return metrics;
}
    int main() {
        int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
        int n = sizeof(arr) / sizeof(arr[0]);
        SortMetrics result;

        printf("### Selection Sort ###\n");
        printf("Unsorted Array:\n");
        printArray(arr, n);

        result = selectionSort(arr, n);

        printf("\nSorted Array:\n");
        printArray(arr, n);
        printf("\nNumber of swaps: %d\n", result.swaps);
        printf("Number of comparisons: %d\n", result.comparisons);

        return 0;
}