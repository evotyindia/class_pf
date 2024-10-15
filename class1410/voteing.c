//Q2. Write a C program to check if a person is eligible to vote. The user should input the person's
//age, and the program should display "Eligible to vote" if the age is 18 or above, and "Not eligible"
//otherwise.
#include<stdio.h>
int main(){
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("Eligible to vote\n");
    }
    else{
        printf("Not eligible\n");
    }
    return 0;
}