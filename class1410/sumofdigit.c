#include<stdio.h>
// sum of digits of a given number 
int main(){
    int num;
    printf("Please enter a number:");
    scanf("%d",&num);
    int sum=0;
    while(num>0){
        sum+=num%10;
        num=num/10;
    }
    printf("The sum of digits is %d",sum);                                            
    return 0;
}