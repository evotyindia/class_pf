#include<stdio.h>
//print of all prime number from 1 to 100
int main(){
    int num,checker;           
    for(num = 1; num <= 100; num++){
        int isPrime = 1;
        if (num <= 1) {
            isPrime = 0; 
        }  
        else {
            for(checker = 2; checker <= num / 2; checker++){
                if(num % checker == 0){
                    isPrime = 0; 
                    break;
                }
            }
        }
        if(isPrime){
            printf("%d\n", num);
        }
    }
    return 0;
}







