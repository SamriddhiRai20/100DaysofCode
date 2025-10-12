#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    gets(sentence);  // you can use fgets(sentence, sizeof(sentence), stdin) for safety

    for (i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';  // end of a word
            if (strlen(word) > maxLength) {
                maxLength = strlen(word);
                strcpy(longest, word);
            }
            j = 0;  // reset word index
            if (sentence[i] == '\0')
                break;  // end of sentence
        }
    } // ✅ <-- this closing brace was probably missing

    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
} 


