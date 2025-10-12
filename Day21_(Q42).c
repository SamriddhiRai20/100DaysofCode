//WAP to check if a number is a perfect number.

#include <stdio.h>

int main() 
{
int num, originalNum;
int sum = 0;

printf("Enter the number:\n");
scanf("%d", &num);

originalNum = num;

for(int i=1;i<num;i++)
 {
  if(num % i == 0)
    {
     sum += i;   
    }
 }  
    

if(sum == originalNum)
{
    printf("This number is a perfect number.");
}
else
{
    printf("This number is not a perfect number.");
}

return 0;
}

