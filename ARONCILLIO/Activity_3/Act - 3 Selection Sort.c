#include <stdio.h>

void printarray(int arr[], int n)
 {
for (int i = 0; i < n; i++)
{
  printf("%d \n", arr[i]);
}
 }

int selectionsort(int arr[], int n)
{ 
    int i, j, min_idx,temp;
    int swaps = 0;
    int comparisons = 0;

    for (i = 0; i < n-1; i++)
    { 
        min_idx = i;
        comparisons++;

        for (j = i+1; j < n; j++)
        { 
             if (arr[j] < arr[min_idx])
             min_idx = j;
        } 
        
        temp = arr[min_idx];
        arr[min_idx] = arr[i];  
        arr[i] = temp;
        swaps++;
    }
  return swaps; 
  return comparisons;


}

int main() 
{ 
  int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
  int n = sizeof(arr)/sizeof(arr[0]);

  printf("###Selection Sort###\n");
  printf("Unsorted array : \n");
  printarray(arr, n);

  selectionsort(arr, n);    

  int swaps = selectionsort(arr, n);
  int comparisons = selectionsort(arr, n);

  printf("Sorted array: \n");
  printarray(arr, n); 

    printf("Number of swaps: %d\n", swaps);
    printf("Number of comparisons: %d\n", comparisons); 

    return 0;



}