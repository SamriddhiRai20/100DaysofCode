/*
WAP to input a year and check whether it is a leap year or not using conditional statements.
*/

#include <stdio.h>
int main() 
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("It is a Leap Year");
        
    }
    else 
    {
        printf("It is not a Leap Year");
    }
    return 0;
	

}

