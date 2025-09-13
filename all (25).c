//WAP to find and display the sum of first n natural numbers.

#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter a positive integer i.e. n\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is:%d\n", n, sum);
    return 0;
	// your code goes here

}

