#include <stdio.h>

int main() {
    int arr[50];
    int i, num;
    int low = 0, high = 49, mid;
    int found = 0;

   
    for(i = 0; i < 50; i++) {
        arr[i] = i + 1;
    }

   
    printf("Enter a number to search: ");
    scanf("%d", &num);

   
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == num) {
            printf("Number found at index: %d\n", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}