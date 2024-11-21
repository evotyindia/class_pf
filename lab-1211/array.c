//5 studetns marks percentage // input marks of 5 subs and print their percentage ! use friendly
#include<stdio.h>
int main(){
    //code
    int marks[5];
    for(int i=0; i<=4; i++){
        printf("Enter the marks of subject %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    int total = 0;
    for(int i=0; i<=4; i++){
        total += marks[i];
    }
    float percentage = (total/500.0)*100;
    printf("The percentage of the student is %.2f\n", percentage);
    return 0;
    

}