// TONNY MAISHA OGETO
// ENE212-0086/2021


#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int originalNumber, numDigits, digit, sum = 0;

    originalNumber = n;

    // Count the number of digits in the number
    numDigits = (int)log10(n) + 1;

    // Calculate the sum of the digits each raised to the power of the number of digits
    while (originalNumber != 0) {
        digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}