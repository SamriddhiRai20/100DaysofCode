//WAP to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
    int i,n;
    long long prod=1;
    
    printf("Enter a number n:\n");
	scanf("%d", &n);
	
	
	for(i=2;i<=n;i+=2)
	{
	 
	  prod *= i;
	  
	}
	printf("Product of even numbers from 1 to %d is %d.", n, prod);
return 0;

}

