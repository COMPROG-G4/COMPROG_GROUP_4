#include <stdio.h>

int arr[15];
int sum = 0;

int main()
{
	for( int i = 0; i < 15; i++)
	{
		arr[i] = i + 1;
		sum += arr[i];
		printf("%d \n", arr[i]);
	}
	printf("Sum of all is : %d", sum);
}