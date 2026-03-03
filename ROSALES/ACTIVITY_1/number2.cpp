#include <stdio.h>

int main () {

char arr[6] = {'A', 'a', 'D', 'H', 'j' , 'J'};

for (int i = 0; i < 6; i++){

    switch(arr[i]){
        case 'A':
        printf("Andrei\n");
        break;

        case 'a':
        printf("Arrianey\n");
        break;

        case 'D':
        printf("Dion\n");
        break;

        case 'H':
        printf("Huertas\n");
        break;

        case 'j':
        printf("John\n");
        break;

        case 'J':
        printf("Jermaine");

        return 0;
    }
}

return 0;
    }