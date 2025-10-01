//Find the sum of all elements in a matrix.

#include <stdio.h>

int main()
{
  int r,c;
  int sum=0;
  
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
          printf("Enter the element at the position [%d][%d]: \n", i + 1,j + 1);
          scanf("%d", &matrix[i][j]);
      }
  }
  
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
        sum += matrix[i][j];
      }
  }
      printf("Sum of all elements in the matrix is %d.", sum);
      printf("\n");
  
  
  
return 0;
}

