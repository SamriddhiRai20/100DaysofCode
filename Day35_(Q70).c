// Rotate an array to the right by k positions.

#include <stdio.h>

int main() 
{
    int arr[100];
    int n, k, i, j;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Get the number of positions to rotate
    printf("Enter the number of positions to rotate to the right: \n");
    scanf("%d", &k);

    // If k is greater than n, calculate the effective rotations
    k = k % n;

    // Rotate the array to the right by k positions
    // This process repeats k times
    for (i = 0; i < k; i++) 
    {
        // Store the last element of the array
        int last = arr[n - 1];
        
        // Shift all elements to the right by one position
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        
        // Place the last element at the beginning of the array
        arr[0] = last;
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
