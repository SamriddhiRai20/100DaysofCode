//Perform diagonal traversal of a matrix.

#include <stdio.h>

void diagonalTraversal(int rows, int cols, int matrix[rows][cols])
{
    // Traverse upwards from the first row and last column
    for (int i = 0; i < rows + cols - 1; i++)
    {
        // Even 'i' represents a downward traversal
        if (i % 2 == 0) {
            int r = (i < rows) ? i : rows - 1;
            int c = (i < rows) ? 0 : i - (rows - 1);
            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        }
        // Odd 'i' represents an upward traversal
        else 
        {
            int r = (i < cols) ? 0 : i - (cols - 1);
            int c = (i < cols) ? i : cols - 1;
            while (r < rows && c >= 0) 
            {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main()
{
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

    printf("Diagonal Traversal: ");
    diagonalTraversal(rows, cols, matrix);

    return 0;
}

