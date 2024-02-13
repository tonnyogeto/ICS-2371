//TONNY MAISHA OGETO
//ENE212-0086/2021
#include <stdio.h>

int main() {
    double num1, num2, sum, difference;
    char operator;

    printf("\nEnter first number:");
    scanf("%lf", &num1); 

    printf("Enter second number:");
    scanf("%lf", &num2); 

    sum = num1 + num2;
    difference = num1 - num2;


    printf("\nThe sum of the numbers is: %lf", sum);
    printf("\nThe difference of the numbers is: %lf", difference);

    printf("\nThe sum of the numbers is: %lf and the difference of the two numbers is: %lf", sum, difference);

    return 0;
}