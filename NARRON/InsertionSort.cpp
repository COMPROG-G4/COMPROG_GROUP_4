#include <stdio.h>

void printarray(int arr [], int n);

void insertion(int arr[], int n) {
    int i, key, j;
    for (i=1; i<n; i++) {
        key = arr[i];
        j = i -1;

        while (j>=0 && arr[j] > key) {
            arr[j+i] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main() {

 int arr[] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55}; 
 int i, j, key, n=10;
 
for (int i = 0; i <10; i++) {
    printf("%d ", arr[i]);
}

for(i=1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    while(j>=0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j = j - 1;
    }

    arr[j + 1] = key;
}
    return 0;
}

void printarray(int arr[], int n) {

    int i;

    for (i = 0; i<n; i++) {
         
        printf("%d ", arr[i]);

    }

printf("--Unsorted--");
printarray;

insertion;

printf("--Sorted--");

printarray;

}

