#include<stdio.h>
int main(){
    //array declaration
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
       printf("Enter element %d: ", i + 1);
       scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("Value of element %d is %d\n",i+1 ,arr[i]);
    }
    return 0;
}