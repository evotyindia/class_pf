#include <stdio.h>
char result = 'A';

// int sum(int x, int y, int z) 

int sum(int x, int y, int z) {
    int sum = x + y + z;
    return sum;
}
int multiplication(int x, int y, int z) {
    int multiplication = x * y * z;
    return multiplication;
}

int main() {
    int x, y, z;
    printf("Enter the first numbers: ");
    scanf("%d", &x);
    printf("Enter the second numbers: ");
    scanf("%d", &y);
    printf("Enter the third numbers: ");
    scanf("%d", &z);
    printf("The sum is: %d\n", sum(x, y, z));
    printf("The multiplication is: %d\n", multiplication(x, y, z));
    printf("The result is: %c\n", result);
    

  
    return 0;
}