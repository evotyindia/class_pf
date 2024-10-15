//Write a C program to check if a given number is divisible by both 3 and 5. If it is divisible by both,
//print "Divisible by 3 and 5". If it is divisible by only one of them, print "Divisible by 3" or "Divisible by
//5". Otherwise, print "Not divisible by 3 or 5".
#include<stdio.h>
int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if(number % 3 == 0 && number % 5 == 0){
        printf("Divisible by 3 and 5\n");
    }
    else if(number % 3 == 0){
        printf("Divisible by 3\n");
    }
    else if(number % 5 == 0){
        printf("Divisible by 5\n");
    }
    else{
        printf("Not divisible by 3 or 5\n");
    }
    return 0;
}
