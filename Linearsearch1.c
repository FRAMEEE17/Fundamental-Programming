#include <math.h>
#include <stdio.h>

int linear_search(int *array_nums, int array_size, int val)
{
    int i;
    for (i = 0; i < array_size; i++)
    {
        if (array_nums[i] == val)
            return i;
    }
    return -1;
}

int main()
{
    int n;
	  int array_nums[] = {0, 10, 40, 20, 30, 50, 90, 75, 82, 92, 155, 133, 145, 163, 200, 180};
	  size_t array_size = sizeof(array_nums) / sizeof(int);
    printf("Original Array : ");
    for (int i = 0; i < array_size; i++) 
        printf("%d ", array_nums[i]);   
    printf("\nInput a number to search: ");
    scanf("%d", &n); 
    int index = linear_search(array_nums, array_size, n);
    if (index != -1)
        printf("%d found at position %d", n,index);
    else
        printf("%d not found..!",n);
    return 0;
}
