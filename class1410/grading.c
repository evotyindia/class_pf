//Q5. Write a C program to categorize a student's grade based on their marks. The user should input
//the marks, and the program should print the grade as follows:
// • Marks >= 90: Grade A
// • Marks >= 80 and < 90: Grade B
// • Marks >= 70 and < 80: Grade C
// • Marks < 70: Grade D
#include<stdio.h>
int main(){
    int marks;
    printf("Please enter your marks: ");
    scanf("%d", &marks);
    if(marks >= 90){
        printf("Grade A\n");
    }
    else if(marks >= 80 && marks < 90){
        printf("Grade B\n");
    }
    else if(marks >= 70 && marks < 80){
        printf("Grade C\n");
    }
    else if(marks < 70){
        printf("Grade D\n");
    }
    else{
        printf("Invalid marks\n");
    }
    return 0;
}