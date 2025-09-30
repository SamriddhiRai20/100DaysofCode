//WAP to count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() 
{
 int a[100];
 int i,n;
 int positiveCount=0;
 int negativeCount=0;
 int zeroCount=0;
 
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
    if(a[i] == 0)
    {
        zeroCount += 1;
    }
    else if(a[i] > 0)
    {
        positiveCount += 1;
    }
    else
    {
        negativeCount += 1;
    }
 }
 
 printf("No. of Positive elements in the array: %d\n", positiveCount);
 printf("No. of Negativ elements in the array: %d\n", negativeCount);
 printf("No. of Zero elements in the array: %d\n", zeroCount);
 
return 0;

}

