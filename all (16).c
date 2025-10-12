//Toggle case of each character in a string.

#include <stdio.h> 

int main() 
{
    char str[100]; 
    int i = 0;     

    printf("Enter a string: \n");
    scanf("%[^\n]s", str); 
    
    while (str[i] != '\0') 
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // Convert to lowercase by adding 32 to its ASCII value
        } 
        
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32 from its ASCII value
        }
        i++; 
    }

    printf("Toggled string: %s\n", str); 

    return 0;
}

