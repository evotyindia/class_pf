#include<stdio.h>
#define N 1.5
int main()
{
 
    int i = 6;
    switch(i)
    {
        case N + 5:
        printf("fan ON");
        break;
        case N * 4:
        printf("AC ON");
        break;
        default:
        printf("ENERGY SAVER ON");
        
    
 }
 return 0;
}