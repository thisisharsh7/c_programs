//Write a C program to demonstrate use of toupper, tolower, pow, sqrt, fabs, floor, ceil functions.

#include<stdio.h>
#include<ctype.h>//library for tolower and toupper function
#include<math.h>//for pow sqrt fabs floor ceil functions

int main(){
    char str[50];
    printf("Enter any string of any case: ");
    scanf("%s",str);
    int j=0;
    char ch;
    printf("\nThe lower case string is: ");
    while(str[j]){
        ch=str[j];
        putchar(tolower(ch));
        j++;
    }
    printf("\nThe upper case string is: ");
    j=0;
    while(str[j]){
        ch=str[j];
        putchar(toupper(ch));
        j++;
    }
    int n1,n2;
    printf("\nUse of pow function.\n");
    printf("Enter the n1 number: ");
    scanf("%d",&n1);
    printf("Enter the n2 number: ");
    scanf("%d",&n2);
    int result=pow(n1,n2);
    printf("Required result is %d",result);
    double n3;
    printf("\nUse of sqrt function.\n");
    printf("Enter the n3 number: ");
    scanf("%lf",&n3);
    double result1=sqrt(n3);
    printf("Required result is %.2lf",result1);
    double n4;
    printf("\nUse of fabs function.\n");
    printf("Enter the n4 number: ");
    scanf("%lf",&n4);
    double result2=fabs(n4);
    printf("Required result is %.2lf",result2);
    double n5;
    printf("\nUse of floor and ceil function.\n");
    printf("Enter the n5 number: ");
    scanf("%lf",&n5);
    int result3=ceil(n5);
    printf("Required result is %d",result3);
    int result4=floor(n5);
    printf("Required result is %d",result4);
    return 0;
}