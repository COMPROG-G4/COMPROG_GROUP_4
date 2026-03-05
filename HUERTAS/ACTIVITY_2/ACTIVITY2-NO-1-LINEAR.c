// Linear No. 1
#include <stdio.h>

int main() {
    int arr[50];
    int n = 50;
    int search, i;
    int found = 0;

    for (int i = 0; i < 50; i++) {
        arr[i] = 50 + i;
    }

    printf("Input a number (50-99): ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

        if (found == 1) {
            printf("Number found\n");
        } else {
            printf("Number not found\n");
        
         
        return 0;
    }
}

