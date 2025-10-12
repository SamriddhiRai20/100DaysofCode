//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

// Function to check if the diagonal elements of a matrix are distinct
bool areDiagonalElementsDistinct(int rows, int cols, int matrix[rows][cols])
{
    // A matrix must be square to have a main diagonal
    if (rows != cols)
    {
        return false;
    }

    // Array to keep track of seen elements
    int seen[1000] = {0}; // Assuming elements are non-negative and within a reasonable range

    // Iterate through the main diagonal
    for (int i = 0; i < rows; i++)
    {
        int element = matrix[i][i];

        // Check if the element has been seen before
        if (seen[element] == 1) 
        {
            return false; // Not distinct
        }

        // Mark the element as seen
        seen[element] = 1;
    }

    return true; // Distinct
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (areDiagonalElementsDistinct(rows, cols, matrix))
    {
        printf("True\n");
    } 
    else
    {
        printf("False\n");
    }

    return 0;
}

