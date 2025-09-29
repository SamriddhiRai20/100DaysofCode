//WAP to check if a number is a perfect number.

#include <stdio.h>

int main() 
{
int num, digit, originalNum;
int sum = 0;
int factorial = 1;

printf("Enter the number:\n");
scanf("%d", &num);

originalNum = num;

digit = num % 10;
for(int i = digit;i>=1;i--)
{
    factorial *= i;
}
sum += factorial;
num /= 10;
    

if(sum == originalNum)
{
    printf("This number is a strong number.");
}
else
{
    printf("This number is not a strong number.");
}

return 0;
}

