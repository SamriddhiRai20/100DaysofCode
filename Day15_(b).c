//WAP to reverse a given number.

#include <stdio.h>

int main()
{
    int n,remainder;
    int rev=0;

    printf("Enter a number n:\n");
	scanf("%d", &n);
	while(n!=0)
	{
	remainder=n%10;
	rev= rev * 10 +remainder;
	n=n/10;
	}
	
    printf("The reversed number is %d.\n", rev);
	
return 0;

}

