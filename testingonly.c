#include<stdio.h>
int main(){
   int a, b , c;
   printf(" the numbers are : \n");
   scanf("%d %d %d", &a, &b, &c);
   if(a > b){
      printf("a is greater than b\n");

    }
    else if(a>c){
        printf("a is greater than c\n");
    }
    else if(c>b){
        printf("c is greatest\n");
    }
    else if(b>c){
        printf("b is greatest\n");

    } 
    else{
        printf("c is greatest");
    }

    return 0;
}
