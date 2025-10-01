//WAP to search in a sorted array using binary search.

#include <stdio.h>

int main() 
{
 int a[100];
 int num,i,keynum;
 int low,mid,high;
 
 printf("Enter number of elements in the array: \n");
 scanf("%d", &num);
 printf("Enter %d elements one by one in sorted(ascending) order:\n", num);
 for(i=0;i<num;i++)
 {
     scanf("%d", &a[i]);
 }

 printf("Enter the element to be searched: \n");
 scanf("%d", &keynum);
 
 //Binary search begins
 low = 0;
 high = num - 1;
 do
 {
    mid = (low + high) / 2;
    if(keynum == a[mid])
    {
        printf("Found at index: %d\n",mid);
        return 0;
    }
    else if(keynum < a[mid])
    {
     high = mid - 1;
    }
    else if(keynum > a[mid])
    {
     low = mid + 1;  
    }
 }
    while(low <= high);
    {
        printf("Not found.\n");
    }
    
return 0;
}

