#include<stdio.h>

int main() {
    int num;
    printf("Please enter a number:"); // Prompt the user to enter a number
    scanf("%d", &num); // Read the number from the user
    if (num%2==0) // Check if the number is even
    {
        printf("The number %d is an even number\n",num); // Print the message if the number is even
    }
    else // If the number is not even
    {
        printf("The number %d is an odd number\n",num); // Print the message if the number is odd
    }
    return 0; // Return 0 to indicate successful execution
}
// In this program, we have used the if-else statement to check if a number is even or odd. 
