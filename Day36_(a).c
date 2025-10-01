//Read and print a matrix.

#include <stdio.h>

int main()
{
  int r,c;
  
  printf("Enter the number of rows: \n");
  scanf("%d", &r);
  printf("Enter the number of coloumns: \n");
  scanf("%d", &c);
  
  int matrix[r][c];
  
  //Read elements of the matrix
  printf("Enter the elements of the matrix: \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("Enter element at position [%d][%d]: \n", i +1,j + 1);
          scanf("%d", &matrix[i][j]);
      }
  }
  
  //Print the matrix
  printf("Matrix: \n");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("%d ", matrix[i][j]);
      }
     printf("\n");
  }
return 0;
}

