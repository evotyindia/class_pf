#include<stdio.h>
int main(){
    char str[20];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("The string is : %s",str);
    return 0;
}