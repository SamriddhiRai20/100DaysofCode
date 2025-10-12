/*
    WAP to find the sum of the series: 2/3 + 4/7 + 6/11 + ... up to n terms.
*/

#include <stdio.h>

int main() 
{
    int n;
    float numerator = 2, denominator = 3, sum = 0;

    printf("Enter the number of terms (n):\n ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += numerator / denominator;
        numerator += 2;      
        denominator += 4;    
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}












