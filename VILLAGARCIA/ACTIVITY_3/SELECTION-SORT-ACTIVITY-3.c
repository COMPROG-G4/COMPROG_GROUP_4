#include <stdio.h>

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void selectionSort(int arr[], int n)
{
  int i, j, min_idx, temp;
  int swaps = 0;
  int comp = 0;

  for (i = 0; i < n - 1; i++)
  {
    min_idx = i;

    for (j = i + 1; j < n; j++)
    {
      comp++;
      if (arr[j] < arr[min_idx])
      {
        min_idx = j;
      }
    }

    if (min_idx != i)
    {
      temp = arr[min_idx];
      arr[min_idx] = arr[i];
      arr[i] = temp;
      swaps++;
    }
  }

  printf("Sorted Array:\n");
  printArray(arr, n);
  printf("\nNumber of comparisons: %d\n", comp);
  printf("Number of swaps:       %d\n", swaps);
}

int main()
{
  int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Unsorted Array:\n");
  printArray(arr, n);

  selectionSort(arr, n);

  return 0;
}