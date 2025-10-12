#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int freq[256] = {0}; // frequency array for all ASCII characters
    int i, found = 0;

    printf("Enter a string: ");
    gets(str); // You can use fgets(str, sizeof(str), stdin) for safer input

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // consider only alphabets
        if(isalpha(ch)) {
            if(freq[(unsigned char)ch] == 1) {
                printf("The first repeating alphabet is: %c\n", ch);
                found = 1;
                break;
            }
            freq[(unsigned char)ch]++;
        }
    }

    if(!found)
        printf("No repeating alphabet found.\n");

    return 0;
}
