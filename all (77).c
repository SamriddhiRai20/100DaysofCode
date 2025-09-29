/*
WAP to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() 
{
    int rows=5;
    // i controls the row(1 to rows=5)
    
    //for upper half
    for(int i=1;i<=rows;++i)
    {
        // stars increases by 2 in each row: 2*i-1
        //i=1; 1 star
        //i=5: 9 stars
        for(int j=1;j <= 2 * i -1;++j)
        {
          printf("*");
        }
    printf("\n");
    }
    
    //for lower half
    // i controls the row count, going backwards from rows-1 (4) to 1   
    for(int i = rows - 1;i >= 1;--i)
    {
        //stars decrease: 2*i-1
        //i=4: 7 stars
        //i=1: 1 star
        for(int j=1;j <= 2 * i - 1;++j)
        {
          printf("*");
        }
      printf("\n");
    }
return 0;
}

