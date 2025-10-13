/*WAP to print the following pattern:

  *
  
  *
  *
  *
  
  *
  *
  *
  *
  *
  
  *
  *
  *
  
  *
  
*/

#include <stdio.h>

int main() 
{
    int star_counts[] = {1, 3, 5, 3, 1};
    // Calculate the total number of groups (5 in this case)
    int num_groups = sizeof(star_counts) / sizeof(star_counts[0]);

    printf("Printing the star pattern using simple loops:\n\n");

    // Outer loop: Iterates through each group in the star_counts array
    for (int i = 0; i < num_groups; i++) 
    {
        int current_count = star_counts[i];

        // Inner loop: Prints the required number of stars for the current group
        for (int j = 0; j < current_count; j++)
        {
            printf("*\n");
        }

        // Conditional newline: Prints a blank line separator AFTER every group,
        // EXCEPT the very last group (i == num_groups - 1).
        if (i < num_groups - 1)
        {
            printf("\n");
        }
    }

    return 0;
}
