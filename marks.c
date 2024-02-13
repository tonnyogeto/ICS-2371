#include <stdio.h>

int main(){
    int marks=60;

    if(marks<=50){
        printf("D");
    } else if(marks>=50){
        printf("C");
    } else if(marks>=60){
        printf("B");
    } else if(marks>=70){
        printf("A");
    }else{
        printf("Invalid operator");
    }

    return 0;

}