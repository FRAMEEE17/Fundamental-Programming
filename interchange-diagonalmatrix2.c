#include <stdio.h>

int main()
{
    

    
    int row, col, size, temp,MAX_ROWS,MAX_COLS;
    int A[10][10];
 
    /* Input elements in matrix from user */
    printf("\nPlease Enter Number of rows and columns  :  ");
    scanf("%d %d", &MAX_ROWS, &MAX_COLS);
    
    printf("Please Enter the Matrix Elements : ");
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    size = (MAX_ROWS < MAX_COLS) ? MAX_ROWS : MAX_COLS;
     for(row=0; row<size; row++)
    {
        col = row;
 
        temp = A[row][col];
        A[row][col] = A[row][(size-col) - 1];
        A[row][(size-col) - 1] = temp;
    }
 
    
    printf("\nMatrix after diagonals interchanged: \n");
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            printf("%d ", A[row][col]);
        }
 
        printf("\n");
    }
 
    return 0;
 
}
