#include <stdio.h>
#include <math.h>

// Function prototypes
void rectangle();
void circle();
void triangle();

int main() {
    int choice;

    while (1) {
        printf("\nChoose a shape to calculate area and perimeter:\n");
        printf("1. Rectangle\n");
        printf("2. Circle\n");
        printf("3. Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rectangle();
                break;
            case 2:
                circle();
                break;
            case 3:
                triangle();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void rectangle() {
    float length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
}

void circle() {
    float radius, area, circumference;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
}

void triangle() {
    float a, b, c, s, area, perimeter;
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%f", &a);
    printf("Side b: ");
    scanf("%f", &b);
    printf("Side c: ");
    scanf("%f", &c);

    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle: %.2f\n", area);
    printf("Perimeter of the triangle: %.2f\n", perimeter);
}
