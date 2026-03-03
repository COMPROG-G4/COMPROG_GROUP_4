#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

int arr[10];
int i, max ;

srand(time(0));

for (i=0; i<10; i++) {
    arr[i] = rand() % 100 + 1;

}

max = arr[0];

for (i=1; i<10 ; i++){

    if(arr[i] > max) {
        max = arr[i];
    }

}

printf("Array Elements:\n");
for (i=0; i<10 ; i++){
    printf("%d ", arr[i]);
}

printf("\nMaximum value in the array: %d\n", max);


    return 0 ;

}