//Reverse a string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100]; 
    char temp;     // a temporary character variable for swapping
    int i, j;      

    printf("Enter a string: ");
    scanf("%s", str); 

    i = 0;
    j = strlen(str) - 1; // strlen() returns the length of the string

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str); 

    return 0;
}

