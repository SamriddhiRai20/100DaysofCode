/*
    WAP to print the following pattern:
        5
       45
      345
     2345
    12345
*/

#include <stdio.h>

int main()
{
    int i, j, k;

    // Loop for each row
    for (i = 5; i >= 1; i--)
        {

        // Print leading spaces
        for (j = 1; j < i; j++) 
        {
            printf("  "); // two spaces for alignment
        }

        // Print numbers from i to 5
        for (k = i; k <= 5; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}






