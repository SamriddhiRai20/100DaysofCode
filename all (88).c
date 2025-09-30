//WAP to merge two arrays.

#include <stdio.h>

int main() 
{
 int a[100],b[100],c[200];
 int n1,n2,n3;
 int i;
 
 
 printf("Input the number of elements to be stored in the array 1:\n");
 scanf("%d", &n1);
 printf("Input the number of elements to be stored in the array 2:\n");
 scanf("%d", &n2);
 
 printf("Input %d elements in the array 1:\n", n1);
 for(i=0;i<n1;i++)
 {
     printf("element %d: \n",i);
     scanf("%d", &a[i]);
 }
 
 printf("Input %d elements in the array 2:\n", n2);
 for(i=0;i<n2;i++)
 {
     printf("element %d: \n",i);
     scanf("%d", &b[i]);
 }
 
 n3 = n1 + n2;
 
 for(i=0;i<n1;i++)
 {
    c[i] = a[i];
 }
 for(i=0;i<n2;i++)
 {
     c[n1 + i] = b[i];
 }
 
 printf("Merged Array: ");
 for(i=0;i<n3;i++)
 {
     printf("%d ", c[i]);
 }
 
return 0;
}

