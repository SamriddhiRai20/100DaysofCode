// Find the sum of each row of a a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    int matrix[rows][cols]; 
    int rowSums[rows];      // Declare array to store row sums

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at matrix[%d][%d]: \n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++)
    {
        int currentSum = 0; // Initialize sum for the current row
        for (int j = 0; j < cols; j++)
        {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum; // Store the sum of the current row
    }

    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) 
    {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}

