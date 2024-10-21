//input 10 numbers, print them , at last print their sum
#include<stdio.h>
int main(){
    int x, i , sum = 0 ;
    for (i=1;i<=10;i++){
        
        printf("enter the number %d : ", i);
        scanf("%d", &x);
        sum = sum + x;
    }
    printf("the sum is %d. \n", sum);
    printf("The average of the numbers is %d", sum/10);
  
    return 0;
}

    