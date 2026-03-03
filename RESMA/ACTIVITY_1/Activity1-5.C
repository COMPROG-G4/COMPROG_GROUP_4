#include <stdio.h>

int main()

{ 
  int arr[14];
  int sum = 0;
  

    for (int i=0; i<14; i++) 
    {
    arr[i] = i + 1;
    }
    for (int i=0; i<14; i++) 
    {
    sum+= arr[i];
    }

printf("The sum of all numbers from 1 to 14 is %d\n", sum);

    return 0;
  
}