// question : write a program that asks the user for their age, gender, and marital status (single or married). Based on the input, the program should determine if the user is eligible for insurance. The program should display a message indicating whether the user is eligible or not. The eligibility criteria are as follows: 
// 1. If the user is married, they are eligible for insurance.
// 2. If the user is single and their gender is male and they are at least 30 years old, they are eligible for insurance.
// 3. If the user is single and their gender is female and they are at least 25 years old, they are eligible for insurance.
// The program should handle invalid inputs 



#include <stdio.h>

int main() {
    int marry, age, gender;


    printf("Please enter your age: ");
    scanf("%d", &age);


    printf("Please enter your gender (0 for male and 1 for female): ");
    scanf("%d", &gender);
    if(gender>1 || gender<0)
    {
        printf("Invalid gender\n");
        printf("Please  try again\n");
        return 0;
    }

 
    printf("Please enter your marital status (0 for single and 1 for married): ");
    scanf("%d", &marry);
    if(marry>1 || marry<0)
    {
        printf("Invalid marital status\n");
        printf("Please  retry again\n");
        return 0;
    }

    
    if (marry == 1) {
        printf("You are eligible for insurance\n");
    } else if (marry == 0 && gender == 0 && age >= 30) {
        printf("You are eligible for insurance\n");
    } else if (marry == 0 && gender == 1 && age >= 25) {
        printf("You are eligible for insurance\n");
    } else {
        printf("You are not eligible for insurance\n");
    }

    return 0;
}