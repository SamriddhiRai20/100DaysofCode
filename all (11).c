/*
Convert a lowercase string to uppercase string without using built-in function.
*/

#include <stdio.h>

int main()
{
    char str[100]; 
    int i = 0;     

    printf("Enter a lowercase string: ");
    gets(str); 

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            // Convert lowercase to uppercase by subtracting 32 from its ASCII value
            // The difference between ASCII values of 'a' and 'A' is 32.
            str[i] = str[i] - 32; 
        }
        i++; 
    }

    printf("Uppercase string: %s\n", str); 

    return 0;
}

