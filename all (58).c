/*
WAP to check if a number is an armstrong number.
*/
#include <stdio.h>
#include <math.h>

int main() 
{
int num;
int result=0;
int n=0;
int remainder, original;

printf("Enter a number:\n");
scanf("%d", &num);

original = num; 

while(original != 0)
{
 original /= 10; //Count the number of digits
 ++n;  //n increments for each digit
}

original=num; //Reset original number to the input number

/*Calculate the sum of the nth power of each digit
  Extract each digit, raised to its power of 'n'
  And add it to 'result'
*/
while(original != 0)
{
    remainder= original % 10;
    result += pow(remainder,n);
    original /= 10;
}

if(result == num )
{
    printf("This number is an Armstrong Number.\n");
}
else
{
    printf("This number is not an Armstrong Number.");
}

return 0;
}

