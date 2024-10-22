//add defference multiply divide using switch case
#include<stdio.h>
int main(){
    float a,b;
    char op;
    printf("Enter the two numbers: ");
    scanf("%f %f",&a,&b);
    printf("Enter the operation (+ , - , * , / ): ");
    scanf(" %c",&op);
    switch(op){
        case '+':
            printf("The sum is: %.2f\n",a+b);
            break;
        case '-':
            printf("The difference is: %.2f\n",a-b);
            break;
        case '*':
            printf("The product is: %.2f\n",a*b);
            break;
        case '/':
            printf("The division is: %.2f\n",a/b);
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}