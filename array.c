#include<stdio.h>

int main() {
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, middle, temp;

    // Print original array
    printf("Original array:");
    for (i = 0; i < 9; i++) {
        printf(" %d", a[i]);
    }

    // Calculate the middle index
    middle = 9 / 2; // Assuming the array has odd number of elements

    // Save the middle element
    temp = a[middle];

    // Delete the middle element by shifting elements to the left
    for (i = middle; i < 8; i++) {
        a[i] = a[i + 1];
    }

    // Print array after deletion
    printf("\nArray after deletion:");
    for (i = 0; i < 8; i++) {
        printf(" %d", a[i]);
    }

    // Shift elements to the right to make space for re-insertion
    for (i = 8; i > middle; i--) {
        a[i] = a[i - 1];
    }

    // Re-insert the middle element back into its original position
    a[middle] = temp;

    // Print updated array
    printf("\nUpdated array:");
    for (i = 0; i < 9; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}




