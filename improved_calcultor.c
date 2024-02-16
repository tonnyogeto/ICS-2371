// TONNY MAISHA OGETO
// ENE212-0086/2021

#include <stdio.h>
#include <math.h>


int main() {
    double num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator); 

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            printf("Sum is: %lf", num1 + num2);
            break;

        case '-':
            printf("Difference is: %lf", num1 - num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Division is: %lf", num1 / num2);
            else
                printf("Error: Division by zero");
            break;

        case '*':
            printf("Product is: %lf", num1 * num2);
            break;

        case '%':
            if (num2 != 0)
                printf("Remainder is: %lf", fmod(num1, num2));
            else
                printf("Error: Modulo by zero");
            break;

        default:
            printf("Invalid operator");
            break;
    }
    return 0;
}

