//WAP to insert an element in an array at a given position

#include <stdio.h>

int main()
{
 int a[100];
 int n;
 int insert;
 int i,position;
 
 printf("Enter the number of elements in the array: \n");
 scanf("%d", &n);
 
 printf("Enter %d elements: \n", n);
 for(i=0;i<n;i++)
 {
     scanf("%d", &a[i]);
 }
 
 printf("Enter the element to insert: \n");
 scanf("%d", &insert);
 printf("Enter the 0-based index for insertion: \n");
 scanf("%d", &position);
 
 if(position < 0 || position > n )
 {
     printf("Invalid position for insertion");
     return 1;
 }
 
 for(i=n;i>=position;i--)
 {
     a[i] = a[i - 1];
 }

    a[position] = insert;
    
    n++;
    
 printf("Array after insertion: \n");
 for(i=0;i<n;i++)
 {
     printf("%d ", a[i]);
 }
 
 printf("\n");
 
 return 0;
}

