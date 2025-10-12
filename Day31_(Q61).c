//WAP to search for an element in an array using linear search.

#include <stdio.h>

int main() 
{
 int a[100];
 int search,i,n;
 
 
 printf("Input the number of elements to be stored in the array:\n");
 scanf("%d", &n);
 
 printf("Input %d elements in the array:\n", n);
 for(i=0;i<n;i++)
 {
     printf("element %d: \n",i);
     scanf("%d", &a[i]);
 }
 
    printf("Enter the number to search:\n");
    scanf("%d", &search);

 for(i=0;i<n;i++)
 {
    if(a[i] == search)
    {
      printf("%d is found at index %d.\n", search, (i));
      break;
    }
 }
 
 if(i == n)
 {
   printf("%d is not found in the array.\n", search);  
 }
 
 
return 0;

}

