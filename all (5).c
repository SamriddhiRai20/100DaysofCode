/*
Find the sum of main diagonal elements for a square matrix. 
*/

#include <stdio.h>

int main()
{
    int i, j, rows, columns, sum = 0;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &rows, &columns);

    // Check if the matrix is square
    if (rows != columns) {
        printf("Error: The matrix is not square. Cannot calculate the sum of the main diagonal.\n");
        return 1; 
    }

    int matrix[rows][columns];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the main diagonal elements
    for (i = 0; i < rows; i++) 
    {
        sum += matrix[i][i];
    }
    
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}


