//WAP to reverse an array without taking extra space.

#include <stdio.h>

int main() 
{
 int a[100];
 int n,tempo,i;
 
 
 printf("Input the number of elements to be stored in the array:\n");
 scanf("%d", &n);
 
 printf("Input %d elements in the array:\n", n);
 for(i=0;i<n;i++)
 {
     printf("element %d: \n",i);
     scanf("%d", &a[i]);
 }
 
 //Reverse the array

 for(i=0;i < n / 2;i++)
 {
    tempo = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = tempo;
 }

  printf("Reversed Array: ");
  for(i=0;i<n;i++)
  {
      printf("%d ", a[i]);
  }
 
return 0;
}

