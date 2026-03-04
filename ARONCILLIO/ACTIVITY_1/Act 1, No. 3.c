#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int arr[10];
int max;

int main()
{
	srand(time(NULL));
	
	for( int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 1;
		printf("%d\n", arr[i]);
		
	}
	
	max = arr[0];
	for( int i = 0; i < 10; i++)
	{
		if(arr[i] > max ){
			max = arr[i];
		}
	}
	printf("Maximum Value is : %d", max);
	
}