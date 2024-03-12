//ENE212-0086/2021
//TONNY MAISHA

#include <stdio.h>
#include <stdlib.h>

int a[10][10], b[10][10], c[10][10]; // Declaration of matrices A, B, and C
int r1, c1, r2, c2; // Variables to store dimensions of matrices
int i, j, k; // Loop control variables

int main() {
    printf("Enter the row and column of the first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column of the second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2) {
        printf("\n Matrices are not multiplicable");
        exit(0);
    }

    printf("\n Enter elements of the Matrix A: \n");
    // Input elements of Matrix A
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter elements of the Matrix B: \n");
    // Input elements of Matrix B
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize matrix C with zeros
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j]; // Multiply corresponding elements and add to the result matrix C
            }
        }
    }

    printf("\n Product of Matrix: \n");

    printf("\n Matrix C: \n");

    // Display result matrix C
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}




 
 

