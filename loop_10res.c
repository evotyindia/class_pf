#include<stdio.h>

int main (){
    int m1, m2, m3, m4, m5;
    float percentage;
    int count = 1;
    while (count <= 10) {
        printf("Please enter the marks of five subjects: ");
        scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
        int total = m1 + m2 + m3 + m4 + m5;
        printf("Total marks: %d\n", total);
        percentage = (total / 5) ;
        printf("Percentage: %.2f\n", percentage);
       
        count++;
    }
    return 0;
}


