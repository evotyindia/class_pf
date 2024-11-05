#include<stdio.h>
int main()
{

signed a;
unsigned b;
a = 6u + -16 + 16u + -6;
b = a + 1;
if (a == b)
    printf("%d %d\n", a,b);
else
    printf("%u %u\n",a,b);
return 0;
}