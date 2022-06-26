// Write a menu driven program for addition, subtraction, product and division.
#include<stdio.h>

int main(){
    double a,b;
    int n;
    printf("Enter two no.s: ");
    scanf("%lf %lf",&a,&b);
    printf("\nPress 1 with enter key for addition.\nPress 2 with enter key for subtraction.\nPress 3 with enter key multiplication.\nPress 4 with enter key for division.\n");
    scanf("%d",&n);
    double result=0;
    switch(n){
        case 1:
        result = a+b;
        printf("\nSum is %0.2lf.",result);
        break;
        case 2:
        result = a-b;
        printf("\nDifference is %0.2lf.",result);
        break;
        case 3:
        result = a*b;
        printf("\nMultiplication is %0.2lf.",result);
        break;
        case 4:
        result = a/b;
        printf("\nDivision is %0.2lf.",result);
        break;
        default:
        printf("Invalid Input");
    }


    return 0;
}