#include <stdio.h>

void printArray(int arr[], int n);
void insertionSort(int arr[], int n);

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertionSort(int arr[], int n)
{
  int i, j, key;
  int comp = 0;
  int swaps = 0;

  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key)
    {
      comp++;
      arr[j + 1] = arr[j];
      swaps++;
      j = j - 1;
    }
    arr[j + 1] = key;
  }

  printf("Sorted Array:\n");
  printArray(arr, n);
  printf("\nComparisons: %d", comp);
  printf("\nShifts:      %d\n", swaps);
}

int main()
{
  int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
  int n = 10;

  printf("Unsorted Array:\n");
  printArray(arr, n);

  insertionSort(arr, n);

  return 0;
}

// yey