#include <stdio.h>

int main()
{
	int n, sum = 0;

	printf("How many numbers u want :  ");
	scanf("%d", &n);

	int arr[n];

	int *parr = arr;

	printf("Enter the Array Items = ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", parr + i);
	}

	for (int i = 0; i < n; i++)
	{
		sum = sum + *(parr + i);
	}

	float avg = (float)sum / n;

	printf("\nThe Sum of %d Numbers is %d \n",n,sum);
	printf("\nThe Average of %d Numbers is %0.2f \n",n,avg);

    return 0;
}
