//Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; 
    int i, len;
    int flag = 0; 

    printf("Enter a string: \n");
    scanf("%s", str); 

    len = strlen(str); 

    // Loop through half of the string, comparing characters from both ends
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1; 
            break;   
        }
    }

    
    if (flag == 1) 
    {
        printf("Not palindrome\n", str);
    } 
    else 
    {
        printf("Palindrome\n", str);
    }

    return 0;
}

