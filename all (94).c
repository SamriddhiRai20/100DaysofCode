//WAP to find the second largest elemnt in an array.

#include <stdio.h>

int main()
{
 int a[100];
 int n;
 int i;
 int largest1 = 0;
 int largest2 = 0;
 int tempo = 0;
 
 printf("Enter the number of elements in the array: \n");
 scanf("%d", &n);
 
 printf("Enter %d elements: \n", n);
 for(i=0;i<n;i++)
 {
     scanf("%d", &a[i]);
 }
 
 largest1 = a[0];
 largest2 = a[1];
 
 if(largest1 < largest2)
 {
     tempo = largest1;
     largest1 = largest2;
     largest2 = tempo;
 }
 
 for(i=2;i<n;i++)
 {
     if(a[i] > largest1)
     {
         largest2 = largest1;
         largest1 = a[i];
     }
     else if(a[i] > largest2 && a[i] != largest1)
     {
         largest2 = a[i];
     }
 }
 
 
 printf("The second largest element is: %d \n", largest2);
 
 return 0;
}

