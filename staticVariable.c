// Write a program to demonstrate use of static variable
#include<stdio.h>

void check(){
    static int  x = 10;
    x++;
    printf("%d\n",x);

}
int main(){
    static int a;
    printf("%d\n",a);//static variable with no initialization has value 0
    check();
    check();

    return 0;
}