#include <stdio.h>

void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void bubbleSort(int arr[], int size)
{
  int comp = 0;
  int swaps = 0;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      comp++;
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swaps++;
      }
    }
  }

  printf("Sorted Array: \n");
  printArray(arr, size);
  printf("\nNumber of comparisons: %d", comp);
  printf("\nNumber of swaps: %d\n", swaps);
}

int main()
{
  int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
  int size = 10;

  printf("Unsorted Array: \n");
  printArray(arr, size);

  bubbleSort(arr, size);

  return 0;
}