#include<stdio.h>

int main() {
    int angle1, angle2, angle3;
printf("Please enter the first angle of the triangle:");
scanf("%d", &angle1);
printf("Please enter the second angle of the triangle:");
scanf("%d", &angle2);
printf("Please enter the third angle of the triangle:");
scanf("%d", &angle3);
if (angle1+angle2+angle3==180)
{
    printf("The angles %d, %d, and %d form a valid triangle\n",angle1,angle2,angle3);
}
else
{
    printf("The angles %d, %d, and %d do not form a valid triangle\n",angle1,angle2,angle3);
}
return 0;
}