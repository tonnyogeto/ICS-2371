// TONNY MAISHA OGETO
// ENE212-0086/2021

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int *arr, int n) {
    int *left = arr;           // Pointer to the beginning of the array
    int *right = arr + n - 1;  // Pointer to the end of the array

    // Continue comparing until left and right pointers meet
    while (left < right) {
        // If values at left and right indices are not equal, it's not a palindrome
        if (*left != *right)
            return false;
        // Move the left pointer to the right and the right pointer to the left
        left++;
        right--;
    }
    // If the loop completes without breaking, it's a palindrome
    return true;
}

int main() {
    int num, temp, digit, i;
    int arr[20]; // Assuming a maximum of 20 digits

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Convert the integer to an array of digits
    temp = num;
    i = 0;
    while (temp != 0) {
        digit = temp % 10;
        arr[i] = digit;
        temp /= 10;
        i++;
    }

    if (isPalindrome(arr, i))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}

