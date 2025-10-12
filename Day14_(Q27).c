//WAP to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int i,n;
    int sum=0;
    
    printf("Enter a number n:\n");
	scanf("%d", &n);
	printf("The odd numbers are:\n");
	
	for(i=1;i<=n;i++)
	{
	  printf("%d\n", 2 * i - 1);
	  sum += 2 * i - 1;
	}
	printf("Sum of first %d odd numbers is %d.", n, sum);
return 0;

}

