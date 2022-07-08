// Write a program to demonstrate pre-increment and post-increment operation.

#include<stdio.h>

int main(){
    printf("PreIncrement example.\n");
    int x =10,y;
    y= ++x;
    printf("On writing PreIncremnt operation x = 10 and y = ++x.\n The x and y respectively are %d and %d.\n",x,y);
    printf("PostIncrement example.\n");
    int a = 10, b;
    b = a++;
    printf("On writing PostIncrement operation a = 10 and b = a++.\n The a and b respectively are %d and %d.\n",a,b);



    return 0;
}