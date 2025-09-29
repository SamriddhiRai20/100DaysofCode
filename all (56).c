/*
WAP to check if a number is a palindrome.
*/
#include <stdio.h>

int main() 
{
int num;
int reversed=0;
int remainder, original;

printf("Enter the Number to check:\n");
scanf("%d", &num);

original = num; //store the original number for comparison

while(num!=0)
{
 remainder= num % 10; //Get the last digit
 reversed= reversed * 10 + remainder; //Store the reversed number
 num /= 10; //Remove the last digit
}


if(original==reversed)
{
    printf("The number is a Palindrome.\n");
}
else
{
    printf("The number is not a Palindrome.");
}

return 0;
}

