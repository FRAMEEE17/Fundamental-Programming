#include <stdio.h>

void Binaryconverter(int num)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (num > 0) {
		// storing remainder in binary array
		binaryNum[i] = num % 2;
		num = num / 2;
		i++;
	}

	// printing binary array in reverse order
    printf("Equivalent binary number is : ");
	for (int j = i - 1; j >= 0; j--)
		printf("%d", binaryNum[j]);
}

// Driver program to test above function
int main()
{   
    int num;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    Binaryconverter(num);
    return 0;
}
