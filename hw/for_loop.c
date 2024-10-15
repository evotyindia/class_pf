#include<stdio.h>
int main(){
    int count, marks;
    for(count=1; count<=10; count++){
        printf("Enter marks: ");
        scanf("%d", &marks);
        printf("Marks of student %d: %d\n", count, marks );
    }

       return 0;
    }
