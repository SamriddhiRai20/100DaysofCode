//WAP to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ...upto n terms.

#include <stdio.h>

int main() 
{
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): \n");
    scanf("%d", &n);

    if (n >= 1) 
    {
        sum = 1.0;
        for (i = 2; i <= n; i++)
        {
            // The numerator for the i-th term is 2i - 1
            // The denominator for the i-th term is 2i
            double numerator = 2.0 * i - 1.0;
            double denominator = 2.0 * i;
            sum += numerator / denominator;
        }
    }

    printf("Sum of the series is: %lf\n", sum);

    return 0;
}

