
#include <stdio.h>
int square(int x) {
    return x * x;
}
int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("The square of %d is %d\n", x, square(x));
    return 0;
}
