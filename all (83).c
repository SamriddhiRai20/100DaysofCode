//WAP to find the maximum and minimum element in the array.

#include <stdio.h>

int main() 
{
 int a[100];
 int i,n;
 int max,min;
 
 printf("Input the number of elements to be stored in the array:\n");
 scanf("%d", &n);
 
 printf("Input %d elements in the array:\n", n);
 for(i=0;i<n;i++)
 {
     printf("element - %d: \n",i);
     scanf("%d", &a[i]);
 }
 
 max = a[0];
 min = a[0];
 
 for(i=1;i<n;i++)
 {
    if(a[i] > max)
    {
        max = a[i];
    }
    if(a[i] < min)
    {
        min = a[i];
    }
 }
 
 printf("Maximum element in the array is: %d\n", max);
 printf("Minimum element in the array is: %d\n", min);
 
return 0;

}

