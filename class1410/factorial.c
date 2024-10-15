#include<stdio.h>
int main(){
    int number;
    printf("Please enter a number:");
    scanf("%d",&number);
    int fact=1;
    for(int i=1;i<=number;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %d",number,fact);
    return 0;
}

