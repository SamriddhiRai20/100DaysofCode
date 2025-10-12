//Add two matrices.

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sumMatrix[rows][cols];

    // Input elements for Matrix 1
    printf("\nEnter elements for Matrix 1:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Enter element a[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for Matrix 2
    printf("\nEnter elements for Matrix 2:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Enter element b[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
