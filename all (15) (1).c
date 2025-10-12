#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};  // frequency array for ASCII characters
    int i;

    printf("Enter first string:\n ");
    gets(str1);  // simple input (use fgets for safety)
    printf("Enter second string:\n");
    gets(str2);

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are NOT anagrams.\n");
        return 0;
    }

    // Count frequency of each character in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i]))  // consider only alphabets
            count[tolower(str1[i])]++;
    }

    // Subtract frequency for each character in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i]))
            count[tolower(str2[i])]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings ARE anagrams of each other.\n");
    return 0;
}

