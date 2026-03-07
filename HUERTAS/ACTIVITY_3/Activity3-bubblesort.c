#include <stdio.h>

// Function Prototypes //
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

int main(void) {
    
    int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("### Bubble Sort ###\n");
    printf("Unsorted Array:\n");
    printArray(arr, size);
    
    bubbleSort(arr, size);

    return 0;
}

// Function to print elements of the array //
void printArray(int arr[], int size) {

    for (int i =0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Bubble Sort function with counters for comparisons and swaps //
void bubbleSort(int arr[], int size) {
    
    int comparisons = 0;
    int swaps = 0;
    int swapped;

    // Outer loop for each pass //
    for (int i = 0; i < size - 1; i++) {
        
        swapped = 0;

        // Inner Loop for pairwise comparisons //
        for (int j = 0; j < size - 1; j++) {
            
            comparisons++;
            if (arr[j] > arr[j + 1]) {

                // Swap adjacent elements if in wrong order //
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = 1;
            }
        }

        // If no swaps occurred during the pass, array is sorted //
        if (!swapped)
            break;
    }

    printf("\nSorted Array:\n");
    printArray(arr, size);

    printf("Number of comparisons: %d\n", comparisons);
    printf("Number of swaps: %d\n", swaps);

}