//Count vowels and consonanats in a string.

#include <stdio.h>
#include <ctype.h> // Required for tolower() function

int main()
{
    char str[100];
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    printf("Enter a string.\n");
    fgets(str, sizeof(str), stdin); // Read string including spaces

    while (str[i] != '\0')
    {
        // Convert character to lowercase for easier comparison
        char ch = tolower(str[i]);

        // Check if the character is an alphabet
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            } 
            else 
            { 
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

