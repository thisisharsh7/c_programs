// Write a program to demonstrate use of global variable

#include<stdio.h>
int x=10;
void check(){
    printf("\n%d",x);
}
int main(){
    printf("%d",x);
    check();


    return 0;
}