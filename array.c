
#include <stdio.h>
#include <stdlib.h> 

// Comparison function for qsort
int compare(const void *x_void, const void *y_void) {
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x - y;
}

int main() {
    int a[9] = {6, 2, 9, 7, 5, 1, 3, 8, 4};
    int length = 9;
    int i, position, deletedElement;

    // Sorting the array in ascending order
    qsort(a, length, sizeof(int), compare);


    // Printing of original array
    printf("Original array:");
    for (i = 0; i < 9; i++) {
        printf(" %d", a[i]);
    }

    // Ask user for position to delete
    printf("\nEnter the position to delete (0 to %d): ", length - 1);
    scanf("%d", &position);

    // Check if the position is within bounds
    if (position < 0 || position >= length) {
        printf("Error: Position out of bounds. Please enter a position between 0 and %d.\n", length - 1);
        return 1; // Exit program with error code
    }

    // Save the element to be deleted
    deletedElement = a[position];

    // Delete the element at the specified position by shifting elements to the left
    for (i = position; i < length - 1; i++) {
        a[i] = a[i + 1];
    }

    // Decrement the length of the array
    length--;

    // Print array after deletion
    printf("\nArray after deletion:");
    for (i = 0; i < length; i++) {
        printf(" %d", a[i]);
    }

    // Shift elements to the right to make space for re-insertion
    for (i = length; i > position; i--) {
        a[i] = a[i - 1];
    }

    // Re-insert the deleted element back into its original position
    a[position] = deletedElement;

    // Print updated array
    printf("\nUpdated array:");
    for (i = 0; i < length + 1; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}





