/*
WAP to input an integer and check whether it is even or odd using if-else.
*/

#include <stdio.h>
int main() 
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("It is an Even Number");
        
    }
    else
    {
        printf("It is an Odd Number");
    }
    return 0;
	

}

