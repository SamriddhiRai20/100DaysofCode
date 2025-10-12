//Multiply two matrices.

#include <stdio.h>

int main() 
{
    int r1, c1, r2, c2; 
    int i, j, k;    

    printf("Enter the number of rows for the first matrix: \n");
    scanf("%d", &r1);
    printf("Enter the number of columns for the first matrix: \n");
    scanf("%d", &c1);

    printf("Enter the number of rows for the second matrix: \n");
    scanf("%d", &r2);
    printf("Enter the number of columns for the second matrix: \n");
    scanf("%d", &c2);

    // Check if matrix multiplication is possible
    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible. Number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 1; 
    }
    
    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int result[r1][c2];

    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++)
    { 
        for (j = 0; j < c2; j++) 
        { 
            for (k = 0; k < c1; k++)
            { 
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nResultant Matrix (Product of the two matrices):\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0; 
}

