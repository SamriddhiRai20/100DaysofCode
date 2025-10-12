//WAP to find the LCM of two numbers.

#include <stdio.h>

int main() 
{
int num1,num2;
int max;
int lcm;

printf("Enter two numbers:\n");
scanf("%d %d", &num1, &num2);

max = (num1 > num2) ? num1:num2; //Determine the bigger of the two numbers

lcm = max;

while((lcm % num1 !=0) || (lcm % num2 != 0))
lcm += max;

printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

return 0;
}

