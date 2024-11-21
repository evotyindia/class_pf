#include<stdio.h>
display(int x){
    printf("Value of element is %d\n", x);
}
int main(){
int i;
int arr[10];
for(i=0;i<10;i++){
    printf("Value of element %d is %d\n", i+1);
    scanf("%d", &arr[i]);
}
for(i=0;i<10;i++){
  display(arr[i]);
}
return 0;
}