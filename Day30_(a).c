//WAP to count even and odd numbers in an array.

#include <stdio.h>

int main() 
{
 int a[100];
 int i,n;
 int evenCount=0;
 int oddCount=0;;
 
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
    if(a[i] % 2 == 0)
    {
        evenCount += 1;
    }
    else
    {
        oddCount += 1;
    }
 }
 
 printf("No. of Even numbers in the array: %d\n", evenCount);
 printf("No. of Odd numbers in the array: %d\n", oddCount);
 
return 0;

}

