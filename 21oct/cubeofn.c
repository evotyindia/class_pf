//cube of n natural numbers
#include<stdio.h>
int main(){
    int n, i ;
    printf("Please enter the number limit:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d * %d * %d = %d\n",i,i,i, i*i*i);
    }

    return 0;
}