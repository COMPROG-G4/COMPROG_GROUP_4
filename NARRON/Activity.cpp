#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary(int arr[], int size, int search); // < prototype

void arrayfill(int arr[], int size) { // generate numbers in arr using for loop
    for(int i=0; i<size; i++) {
        arr[i]=i+1;
    }
}

int main() { 
    int arr[100];
    int num; 

    srand(time(0));

    int size = rand() % 51 + 50;

    arrayfill(arr, size);

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = binary(arr, size, num);

    if(result != -1) 
        printf("Number found at index: %d\n", result);
    else
        printf("Number not found.\n");

    return 0;
}

int binary(int arr[], int size, int search) { //<binary 
    int l = 0, r = size - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == search)
            return mid;
        else if (arr[mid] < search)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1; //return w/ error if ever
}

//Naron