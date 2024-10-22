#include <stdio.h>


// int sum(int x, int y, int z) 
 void welcome() {
    printf("Welcome to the program\n");
}

int sum() {
    int x, y, z;
    printf("Enter the first numbers: ");
    scanf("%d", &x);
    printf("Enter the second numbers: ");
    scanf("%d", &y);
    printf("Enter the third numbers: ");
    scanf("%d", &z);

    int sum = x + y + z;
   printf("The sum is: %d\n", sum);
   
}



int main() {
welcome();
sum();

    return 0;
}