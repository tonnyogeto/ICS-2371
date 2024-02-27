#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for qsort function

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int a[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int i, middle, temp;

    // Sorting the array in ascending order
    qsort(a, 9, sizeof(int), compare);

    // Printing of original array
    printf("Original array:");
    for (i = 0; i < 9; i++) {
        printf(" %d", a[i]);
    }

    // Calculate the middle index
    middle = 9 / 2; 

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




