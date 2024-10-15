//Q1 . Write a C program that checks if a number entered by the user is positive, negative, or zero.

#include<stdio.h>
int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if(number > 0){
        printf("The number is positive\n");
    }
    else if(number < 0){
        printf("The number is negative\n");
    }
    else{
        printf("The number is zero\n");
    }
    return 0;
}