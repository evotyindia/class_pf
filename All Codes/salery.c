// Question : Write a program to calculate the gross salary of an employee based on the following conditions:
//             1. If the basic salary is less than 1500 then HRA = 10% of the basic salary and DA = 90% of the basic salary
//             2. If the basic salary is greater than or equal to 1500 then HRA = 500 and DA = 98% of the basic salary
//             Note: Basic salary is entered by the user
//             The program should display the HRA, DA, and the gross salary of the employee
//             The program should be able to handle decimal values

#include<stdio.h>


int main(){
    int salary;
    int HRA;
    int DA;
    printf("Please enter your basic salary: ");
    scanf("%d",&salary);
    
    if(salary<1500)
    {
     printf("You will get 10percent HRA and DA of 90percent of your basic salary\n");
        HRA = salary*0.1;
        DA = salary*0.9;
        printf("Your HRA is %dRs.\n",HRA);
        printf("Your DA is %dRs.\n",DA);
        printf("Your gross salary is %dRs.\n",salary+HRA+DA);
     

    }
    else
    {
        printf("You will get 500 Rs HRA and DA of 98 percent of your basic salary\n");
        HRA = 500;
        DA = salary*98/100;
        printf("Your HRA is %d Rs.\n",HRA);
        printf("Your DA is %d Rs.\n",DA);
        printf("Your gross salary is %dRs.\n",salary+HRA+DA);

    }

    return 0;
}