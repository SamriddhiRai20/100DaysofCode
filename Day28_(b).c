//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() 
{
 int n,i;
 
 printf("Input the size of the array:\n");
 scanf("%d", &n);
 
 int array[n];
 
 printf("Input %d elements in the array:\n", n);
 for(i=0;i<n;i++)
 {
     printf("Enter element %d\n", i + 1);
     scanf("%d", &array[i]);
 }
 
 printf("Elements in the array are:");
 for(i=0;i < n;i++)
 {
 printf("%d ", array[i]);
 }
 
 printf("\n");
 
return 0;
}

