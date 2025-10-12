//WAP to input a character and check whether it is a vowel or consonant using if-else.

#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet:\n");
    scanf("%c", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
    if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))
    
    {
        printf("%c is a Vowel.", ch);
    }
    else if((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
    {
        printf("%c is a Vowel", ch);
    }
    else
    {
        printf("%c is a Consonant", ch);
    }}
    else
    {
        printf("Invalid Input");
    }
return 0;
    
	

}

