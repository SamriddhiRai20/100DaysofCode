//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i, key, pos;

    printf("Enter the number of elements in the sorted array: \n");
    scanf("%d", &n);

    // Get the sorted array elements
    printf("Enter the sorted elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: \n");
    scanf("%d", &key);

    // Find the correct position to insert the element
    pos = n; // Assume the new element will be at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }

    // Shift elements to make space for the new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the found position
    arr[pos] = key;
    n++; // Increment the array size

    // Print the final array
    printf("The array after insertion is: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

