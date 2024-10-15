// Question :  Write a program to calculate the percentage of a student and display the result as follows:
//             1. If the percentage is greater than or equal to 60 then print First Division
//             2. If the percentage is greater than or equal to 50 and less than 60 then print Second Division
//             3. If the percentage is greater than or equal to 40 and less than 50 then print Third Division
//             4. If the percentage is less than 40 then print Fail
//             Note: Total marks are 500
//             Marks are entered by the user
//             Marks are entered in the following order: English, Hindi, Math, Science, Social Studies
//             The program should be able to handle decimal values
//             The program should display the total marks and the percentage of the student


#include<stdio.h>

int main() {
    float eng, hin, math, sci, sst, total, mm;
    float percent;
    mm = 500;
    printf("Please enter the marks in English:");  
    scanf("%f", &eng);
    printf("Please enter the marks in Hindi:");
    scanf("%f", &hin);
    printf("Please enter the marks in Math:");
    scanf("%f", &math);
    printf("Please enter the marks in Science:");
    scanf("%f", &sci);
    printf("Please enter the marks in Social Studies:");
    scanf("%f", &sst);
    total = eng + hin + math + sci + sst;
    printf("The total marks of the student is %.2f\n", total);
    percent = (total / mm) * 100;
    printf("The percentage of the student is %.2f%%\n", percent);
    if (percent >= 60)
    {
        printf("The student passed by First Division\n");
    }
    else if (percent >= 50 && percent < 60)
    {
        printf("The student passed by Second Division\n");
    }
    else if (percent >= 40 && percent < 50)
    {
        printf("The student passed by Third Division\n");
    }
    else
    {
        printf("The student has secured an F grade\n");
    }
    return 0;
}