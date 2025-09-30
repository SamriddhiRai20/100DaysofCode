//WAP to find the sum of array elements.

#include <stdio.h>

int main() 
{
 int a[100];
 int i,n;
 int sum=0;
 
 printf("Input the number of elements to be stored in the array:\n");
 scanf("%d", &n);
 
 printf("Input %d elements in the array:\n", n);
 for(i=0;i<n;i++)
 {
     printf("element - %d: \n",i);
     scanf("%d", &a[i]);
 }
 
 for(i=0;i<n;i++)
 {
     sum += a[i];
 }
 
 printf("Sum of all elements stored in the array is: %d", sum);
 
return 0;

}

