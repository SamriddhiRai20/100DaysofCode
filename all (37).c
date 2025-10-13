//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

char findFirstRepeatingChar(char* str)
{
    int i, j;
    if (str == NULL) 
    {
        return '\0'; // Handle null string
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    return str[i]; // Found the first repeating lowercase alphabet
                }
            }
        }
    }
    return '\0'; // No repeating lowercase alphabet found
}

int main()
{
    char inputString[100];

    printf("Enter a string: \n");
    scanf("%s", inputString);

    char repeatingChar = findFirstRepeatingChar(inputString);

    if (repeatingChar != '\0') 
    {
        printf("The first repeating lowercase alphabet is: %c\n", repeatingChar);
    } 
    else 
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}

