//WAP to print all factors of a given number.

#include <stdio.h>

int main() 
{
int num;
int i;

printf("Enter a number:\n");
scanf("%d", &num);

printf("The factors of %d are:\n", num);


for(i=1;i<=num;i++)
{
   if(num%i == 0)
   printf("%d\n", i);
}

return 0;
}

