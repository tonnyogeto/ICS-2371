// # include<stdio.h>



// int main(){
//     double num1,num2,result;
//     char operator;

//     printf("\nEnter an operator(+,-):");
//     scanf("%c", &operator); 

//     printf("Enter first number:");
//     scanf("%lf", &num1); 

    
//     printf("Enter second number:");
//     scanf("%lf", &num2); 

//     switch(operator){
//         case "+":
//             result=num1+num2;
//             printf("\nsum: %lf", result);
//             break;

//         case "-":
//             result=num1-num2;
//             printf("\ndiffence: %lf", result);
//             break;

//         default:
//         printf("%c is not valid", operator); 
//     }


// }
    


#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("\nEnter an operator(+,-):");
    scanf(" %c", &operator); 

    printf("Enter first number:");
    scanf("%lf", &num1); 

    printf("Enter second number:");
    scanf("%lf", &num2); 

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\nsum: %lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\ndifference: %lf", result);
            break;

        default:
            printf("%c is not valid", operator); 
    }

    return 0;
}