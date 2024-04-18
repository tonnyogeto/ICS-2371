// TONNY MAISHA OGETO
// ENE212-0086/2021

#include <stdio.h>
#include <math.h>

double summation(double num1, double num2) {
    return num1 + num2;
}

double subtraction(double num1, double num2) {
    return num1 - num2;
}

double division(double num1, double num2) {
    if (num2 != 0)
        return num1 / num2;
    else {
        printf("Error: Division by zero\n");
        return 0; 
    }
}

double multiplication(double num1, double num2) {
    return num1 * num2;
}

// double modulo(double num1, double num2) {
//     if (num2 != 0)
//         return fmod(num1, num2);
//     else {
//         printf("Error: Modulo by zero\n");
//         return 0; 
//     }
// }

int main() {
    double num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator); 

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double result;
    switch (operator) {
        case '+':
            result = summation(num1, num2);
            printf("Sum is: %lf\n", result);
            break;

        case '-':
            result = subtraction(num1, num2);
            printf("Difference is: %lf\n", result);
            break;

        case '/':
            result = division(num1, num2);
            printf("Division is: %lf\n", result);
            break;

        case '*':
            result = multiplication(num1, num2);
            printf("Product is: %lf\n", result);
            break;

        // case '%':
        //     result = modulo(num1, num2);
        //     printf("Remainder is: %lf\n", result);
        //     break;

        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}

