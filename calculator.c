# include<stdio.h>



int main(){
    double num1,num2;
    char operator;

    printf("\nEnter an operator(+ -):");
    scanf("%c", &operator); 

    printf("Enter first number:");
    scanf("%lf", &num1); 

    
    printf("Enter second number:");
    scanf("%lf", &num2); 

    switch(operator){
        default:
        printf("%c is not valid", operator);
    }

2
}
    


