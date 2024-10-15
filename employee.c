#include<stdio.h>

int main(){
    int year;
   printf("Please enter your year of experience: ");
   scanf("%d", &year);
    if(year >= 5)
    {
         printf("You are a senior employee\n");
         printf("You will get bonus of 10000rs\n");
    }
    else
    {
        printf("You are a junior employee\n");
        printf("You will not get bonus of 10000rs\n");
    }
    return 0;
    }
    // In this program, we have used the if-else statement to check if a number is even or odd.