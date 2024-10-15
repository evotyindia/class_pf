//Question : Write a C program to check whether a number is even or odd.


#include<stdio.h>

int main(){
 int num;
 printf("Please enter a number:"); // Prompt the user to enter a number
 scanf("%d",&num); // Read the number from the user
    if(num%2==0) // Check if the number is divisible by 2
    {
        printf("The number %d is an even number\n",num); // Print the message if the number is even
    }
    else // If the number is not divisible by 2
    {
        printf("The number %d is an odd number\n",num); // Print the message if the number is odd
    }
    return 0; // Return 0 to indicate successful execution
}