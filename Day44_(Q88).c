//Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>

void replaceSpacesWithHyphens(char *str) 
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }
}

int main()
{
    char String[100]; 

    printf("Enter a string: ");
    fgets(String, sizeof(String), stdin);

    // Remove the trailing newline character if present from fgets
    String[strcspn(String, "\n")] = '\0';

    printf("Original string: %s\n", String);

    replaceSpacesWithHyphens(String);

    printf("Modified string: %s\n", String);

    return 0;
}

