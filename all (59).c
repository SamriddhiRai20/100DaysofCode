/*
WAP to check if a number is prime.
*/
#include <stdio.h>

int main() 
{
int num;
int count=0;
int i;

printf("Enter a number:\n");
scanf("%d", &num);

if(num <= 1)
{
    printf("This number is not prime.\n");
}
else
{
for(i=2;i<=num;i++)
{
   if(num%i == 0)
   count++;
   break;
    
}
}

if(count == 0 )
{
    printf("This number is prime.\n");
}
else
{
    printf("This number is not prime.");
}

return 0;
}

