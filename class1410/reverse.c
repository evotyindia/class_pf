#include<stdio.h>
// reverse of a number using for loop
int main(){
    int num;
    printf("Please enter a number:");
    scanf("%d",&num);
    int prnum=0;
    for (;num>0;){
        prnum=num%10;
        printf("%d",prnum);
        num=num/10; 
    }
                                       
    return 0;
}