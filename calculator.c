# include<stdio.h>



int main(){

    int num1;
    int num2;
    char operator;

    scanf("Enter num1: %d/n", &num1); 
    scanf("Enter operator: %d/n", &operator);
    scanf("Enter num2: %d/n", &num2);

    if(operator="+"){
        printf("The sum is:",num1+num2);
    } else if(operator="-"){
        printf("The difference is:", num1-num2);
    } else{
        printf('the operator is invalid!');

    }
}
    


