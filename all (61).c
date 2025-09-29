//WAP to find the HCF(GCD) of two numbers.

#include <stdio.h>

int main() 
{
int num1,num2;
int i,j;
int hcf=1;

printf("Enter two numbers:\n");
scanf("%d %d", &num1, &num2);

j = (num1 < num2) ? num1:num2; //Determine the smaller of the two numbers

for(i=1;i<=j;i++) //loop to find the hcf
{
   if(num1 % i == 0 && num2 % i == 0)
   hcf=i;
}

printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

return 0;
}

