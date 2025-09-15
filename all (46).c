//WAP to calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int i,n;
    unsigned long long fact=1;
    
    printf("Enter a number n:\n");
	scanf("%d", &n);
	
	if(n<0)
	{
	    printf("Error:Factorial of a negative number does not exist\n");
	}
	else if(n==0)
	{
	    printf("Factorial of 0 is 1\n");
	}
	else
	{
	for(i=1;i<=n;i++)
	{
	 
	  fact *= i;
	  
	}
	printf("The factorial of %d is %d.\n", n, fact);
	}
return 0;

}

