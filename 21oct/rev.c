#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number using for loop
    for (int temp = num; temp != 0; temp /= 10) {
        int remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}