//WAP to find the sum of digits of a number.

#include <stdio.h>

int main() 
{
int num, digit;
int sum=0;
int originalNum;

printf("Enter the number:\n");
scanf("%d", &num);

originalNum=num;

while(num != 0)
{
digit = num % 10;
sum += digit;
num /= 10;
}

printf("Sum of digits of %d is %d\n", originalNum, sum);

return 0;
}

