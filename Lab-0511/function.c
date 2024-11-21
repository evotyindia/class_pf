#include<stdio.h>
void swap_ref(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_val(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    swap_val(a, b);
    printf("After swapping by value: a = %d, b = %d\n", a, b);
    swap_ref(&a, &b);
    printf("After swapping by reference: a = %d, b = %d\n", a, b);

    return 0;
}