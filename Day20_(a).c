//WAP to find the product of odd digits of a number.

#include <stdio.h>

int main() 
{
int num, digit, originalNum;
int prod = 1;

printf("Enter the number:\n");
scanf("%d", &num);

originalNum = num;

if(num<0)
{
    num -= num;
}
if(num == 0)
{
 printf("Product of odd digits: 1\n");
 return 0;
}
while(num > 0)
{
 digit = num % 10;
 
 if(digit % 2 != 0)
 {  
    prod *= digit;
 }
 num = num / 10;
}

printf("Product of the digits of %d is %d", originalNum, prod);

return 0;
}

