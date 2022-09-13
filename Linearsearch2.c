#include<stdio.h>
int main()
{
   int  element;
   int array_nums[] = {0, 10, 40, 20, 30, 50, 90, 75, 82, 92, 155, 133, 145, 163, 200, 180};
   size_t array_size = sizeof(array_nums) / sizeof(int);
   printf("Original Array: ");
   for(int i=0; i<array_size; i++)
        printf("%d ", array_nums[i]);

   printf("\nInput a number to search: ");
   scanf("%d",&element);

   for(i=0; i<array_size; i++)
   {
     if(array_nums[i]==element)
     {
       printf("%d found at position %d", element, i+1);
       return 0;
     }
   }

   printf("%d not found..!", element);
   return 0;
}
