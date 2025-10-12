#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string:\n ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]) && str[i] != '\n')
            special++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}













