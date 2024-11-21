#include <stdio.h>

int main(void)
{
    int number;
    int reversed_number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        int remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    printf("Reversed Number: %d\n", reversed_number);

    return 0;
}
