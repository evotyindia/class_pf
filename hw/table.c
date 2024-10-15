#include<stdio.h>
int main(){
    int count, number ;
    
    printf("Please enter the number for which you want to print the table: ");
   
    scanf("%d", &number);
    for(count=1; count<=10; count++){
        printf("%d * %d = %d\n", number, count, number*count);
    }
     return 0;
}