//Check if a matrix is symmetric. 

#include <stdio.h>

int main() 
{
    int rows, cols;

    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    // Check if it's a square matrix
    if (rows != cols) {
        printf("The matrix is not square, hence it cannot be symmetric.\n");
        return 0;
    }

    int matrix[rows][cols]; 

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int isSymmetric = 1; // Assume symmetric until proven 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0; // Found a non-matching pair
                break; 
            }
        }
        if (!isSymmetric)
        {
            break; 
        }
    }

    // Output the result
    if (isSymmetric)
    {
        printf("\nTrue\n");
    }
    else 
    {
        printf("\nFalse\n");
    }

    return 0;
}

