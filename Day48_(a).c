//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string:\n");
    gets(str1);  
    printf("Enter second string:\n ");
    gets(str2);

    
    if (strlen(str1) != strlen(str2))
    {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    
    strcpy(temp, str1);
    strcat(temp, str1);

    
    if (strstr(temp, str2) != NULL)
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are N rotations of each other.\n");

    return 0;
}


