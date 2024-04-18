// TONNY MAISHA OGETO
// ENE212-0086/2021

#include <stdio.h>
#include <stdlib.h> 

// Comparison function for qsort
int compare(const void *x_void, const void *y_void) {
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x - y;
}

int main() {
    int size; // Variable to store the size of the array
    int *a; // Pointer to dynamically allocated array
    int length; // Length of the array
    int i, position, deletedElement;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    a = (int *)malloc(size * sizeof(int));
    if (a == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1; // Exit program with error code
    }

    // Prompt the user to enter each element of the array
    printf("Enter %d elements for the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    // Set the length of the array
    length = size;

    // Sorting the array in ascending order
    qsort(a, length, sizeof(int), compare);

    // Printing of original array
    printf("\nOriginal array:");
    for (i = 0; i < length; i++) {
        printf(" %d", a[i]);
    }

    // Ask user for position to delete
    printf("\nEnter the position to delete (0 to %d): ", length - 1);
    scanf("%d", &position);

    // Check if the position is within bounds
    if (position < 0 || position >= length) {
        printf("Error: Position out of bounds. Please enter a position between 0 and %d.\n", length - 1);
        free(a); // Free dynamically allocated memory
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

    // Free dynamically allocated memory
    free(a);

    return 0;
}



