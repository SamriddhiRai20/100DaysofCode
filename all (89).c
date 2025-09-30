//WAP to find the digit that occurs the most timesin an integer number.

#include <stdio.h>

int main()
{
    long long num;
    int frequency[100] = {0}; // Array to store frequency of digits 0-9
    int digit;
    int maxFrequency = 0;
    int mostOccurringDigit = 0;

    printf("Enter an integer number :\n");
    scanf("%lld", &num);

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // If the number is 0, the most occurring digit is 0
    if (num == 0) {
        printf("The most occurring digit is: 0\n");
        return 0;
    }

    // Extract digits and update frequency
    while (num > 0) 
    {
        digit = num % 10; // Get the last digit
        frequency[digit]++; // Increment the frequency of that digit
        num /= 10; // Remove the last digit
    }

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) 
    {
        if (frequency[i] > maxFrequency) 
        {
            maxFrequency = frequency[i];
            mostOccurringDigit = i;
        }
        else if (frequency[i] == maxFrequency)
        {
            // If multiple digits have the same max frequency,
            // the smallest digit among them is considered.
            // You can adjust this logic based on specific requirements.
            if (i < mostOccurringDigit) 
            {
                mostOccurringDigit = i;
            }
        }
    }

    printf("The most occurring digit is: %d\n", mostOccurringDigit);

    return 0;
}
