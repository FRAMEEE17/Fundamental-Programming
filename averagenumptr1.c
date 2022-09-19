#include <stdio.h>
#include <conio.h>

int main()
{
        int n,*p,sum=0;
        float avg;

        printf("How many numbers u want : ");
        scanf("%d",&n);

        p=(int *) malloc(sizeof(int));

        if(p==NULL)
        {
                printf("\nMemory Allocation unsuccessful.\n");
                exit(0);
        }
        printf("Enter the Array Items = ");
        for(int i=0;i<n;i++)
        {
                
                scanf("%d",p+i);
        }

        for(int i=0;i<n;i++)
        {
                sum=sum+*(p+i);
        }

        printf("\nThe Sum of %d Numbers is %d \n",n,sum);

        avg=(float)sum/n;

        printf("\nThe Average of %d Numbers is %0.2f \n",n,avg);

        return 0;
}
