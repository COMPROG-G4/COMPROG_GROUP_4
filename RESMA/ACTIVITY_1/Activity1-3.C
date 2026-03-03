#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int i, max;


    srand(time(NULL));

    
    for(i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    
    printf("Array elements:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    
    max = arr[0];
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\n\nMaximum value: %d\n", max);

    return 0;
}