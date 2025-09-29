/*
WAP to input an integer and check whether it is positive,negative or zero using nested if-else.
*/

#include <stdio.h>
int main() 
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    if(a>0)
    {
        printf("It is a Positive Number");
        
    }
    else if(a<0)
    {
        printf("It is a Negative Number");
    }
    else
    {
        printf("0");
    }
    return 0;
	// your code goes here

}

