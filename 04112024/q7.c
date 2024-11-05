#include<stdio.h>
int main()
{
int i = 0;
while (i < 2)
switch (i)
{
    i=2;
    case 0: printf("hai , case 0 ");
    i++;
    case 1: printf("hai , case 1 ");
    i++;break;
    case 2: printf("hai , case 2 ");
    i++;break;
    default: printf("hai , case def ");}
    

    return 0;
}
