#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) { //i = 1
        for(int j = 1; j <= i; j++) { //j=1
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");




    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

 printf("\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j< i; j++) {
            printf("%c ", 'A'+j);
        }
        printf("\n"); 
    }

    
     printf("\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j< i; j++) {
            printf("%c ", '*');
        }
        printf("\n"); 
    }

    return 0;
}