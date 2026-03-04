#include <stdio.h>

int arr[100];
int n = 100;
int target;
int index = 0;

int main()
{
	for(int i = 0; i <= n; i++)
	{
		arr[i] = i + 1;//input of numbers
	}

	printf("Type a number from 1 -100 : \n");
	scanf("%d", &target);
	
	for( int i = 0; i < n; i++)
	{
		if (arr[i] == target)
		{
			index = i;
		}
	}
	if ( index != 0)
	printf("Number found at index : %d", index);
	else
	printf("Number not found");
	
}