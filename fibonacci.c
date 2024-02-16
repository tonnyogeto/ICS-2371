// TONNY MAISHA OGETO
// ENE212-0086/2021

#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d: ", n);

    for (int i = 0; i <n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}