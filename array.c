// #include<stdio.h>

// int main() {
//     int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int i;

//     for (i = 0; i < 9; i++) {
//         printf("%d ", a[i]);
//     }



//     return 0;
// }


#include<stdio.h>

int main() {
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, middle;

   
    for (i = 0; i < 9; i++) {
        printf(" %d", a[i]);
    }

    // Calculate the middle index
    middle = 9 / 2; // Assuming the array has odd number of elements

    // Shift elements to the left starting from the middle index


    for (i = middle; i < 8; i++) {
        a[i] = a[i + 1];
    }

    // Print the updated array
    for (i = 0; i < 8; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}


