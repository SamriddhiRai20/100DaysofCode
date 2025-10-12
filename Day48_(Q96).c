//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>


void reverseWord(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char sentence[200];
    char *word_start = NULL;
    int i = 0;

    printf("Enter a sentence:\n ");
    gets(sentence);  

    while (1) 
    {

        if (word_start == NULL && sentence[i] != ' ' && sentence[i] != '\0')
        {
            word_start = &sentence[i];
        }

    
        if ((sentence[i] == ' ' || sentence[i] == '\0') && word_start != NULL)
        {
            reverseWord(word_start, &sentence[i - 1]);
            word_start = NULL;
        }

        if (sentence[i] == '\0')
            break;
        i++;
    }

    printf("Sentence after reversing each word:\n%s\n", sentence);

    return 0;
}


