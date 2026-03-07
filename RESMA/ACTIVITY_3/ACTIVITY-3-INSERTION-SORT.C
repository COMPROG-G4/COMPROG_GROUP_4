#include<stdio.h>

//initialization
int main(){
int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55}; 
 int i, j, key, n = 10;
 int comp = 0;
 int swaps = 0;

printf("Unsorted Array:\n"); 
for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
}

//main function of insertion sort
for(i = 1; i < n; i++) {
    key = arr[i];
   
    j = i - 1; //j - element; i - index

    while(j >= 0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j = j - 1;
        comp++;
    }

    arr[j + 1] = key;
    swaps++;
}
//print
printf("\nSorted Array:\n");
for(int i=0; i<10;i++){
    printf("%d ", arr[i]);
}
printf("\n\nComparisons:   %d", comp);
printf("\nSwaps: %d", swaps);
    return 0;

}

