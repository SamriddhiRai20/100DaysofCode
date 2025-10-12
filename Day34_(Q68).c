//Delete an element from an array.

#include <stdio.h>

int main()
{
 int a[100];
 int n;
 int i,position;
 
 printf("Enter the number of elements in the array: \n");
 scanf("%d", &n);
 
 printf("Enter %d elements: \n", n);
 for(i=0;i<n;i++)
 {
     scanf("%d", &a[i]);
 }
 
 printf("Enter the position(0-based) of the element to delete: \n");
 scanf("%d", &position);
 
 if(position < 0 || position > n - 1)
 {
     printf("Invalid position! Please enter a position within the array bounds.\n");
     return 1;
 }
 else
 {
     for(i=position;i<n;i++)
     {
         a[i] = a[i + 1];
     }
     n--;
 }
 

    
 printf("Array after deletion of the element from the array: \n");
 for(i=0;i<n;i++)
 {
     printf("%d ", a[i]);
 }
 
 printf("\n");
 
 return 0;
}

