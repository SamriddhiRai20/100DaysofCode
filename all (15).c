/*
Count frequency of a given character in a string.
*/

#include <stdio.h>

int main()
{
    char str[100]; 
    char targetChar; 
    int count = 0; 
    int i = 0; 

    printf("Enter a string: \n");
    scanf("%s", str); 

    printf("Enter the character to find its frequency: \n");
    scanf(" %c", &targetChar);
    
    while (str[i] != '\0')
    {
        if (str[i] == targetChar)
        {
            count++; 
        }
        i++; 
    }

    printf("Frequency of character '%c' in the string is: %d\n", targetChar, count);

    return 0;
}

