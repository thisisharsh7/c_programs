// Write a program to List all the arithmetic and relational operators along with there example expression with output.
#include<stdio.h>

int main(){
    int a=10,b=20;
    int result;
    printf("\nArithmetic Operators-");
    printf("\nLet a and b is %d and %d respectively.",a,b);
    printf("\n1.Addition (+) : ");
    result=a+b;
    printf("%d + %d = %d",a,b,result);
    printf("\n2.Subtraction (-) : ");
    result=a-b;
    printf("%d - %d = %d",a,b,result);
    printf("\n3.Multiplication (*) : ");
    result=a*b;
    printf("%d * %d = %d",a,b,result);
    printf("\n4.Modulous (%%) : ");
    result=b%a;
    printf("%d %% %d = %d",b,a,result);
    printf("\n5.Division (/) : ");
    result=b/a;
    printf("%d / %d = %d\n",b,a,result);
    printf("\nRelational Operators-");
    printf("\n1.Greater than (>) : ");
    result=a>b;
    result ? printf("%d > %d is true",a,b) : printf("%d > %d is false",a,b);
    printf("\n1.Smaller than (<) : ");
    result=a<b;
    result ? printf("%d < %d is true",a,b) : printf("%d < %d is false",a,b);
    printf("\n1.Equal to (==) : ");
    result=(a==b);
    result ? printf("%d == %d is true",a,b) : printf("%d == %d is false",a,b);
    printf("\n");

    

    return 0;
}
