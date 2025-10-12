//Find the transpose of a matrix. 

#include <stdio.h>

int main()
{
    int rows, cols;
    
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    int originalMatrix[rows][cols];
    int transposeMatrix[cols][rows]; 

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element a[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    // Calculate the transpose
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            transposeMatrix[j][i] = originalMatrix[i][j];
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }

    // Display the transpose matrix
    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < cols; i++)
    { 
        for (int j = 0; j < rows; j++)
        { 
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

