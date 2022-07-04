// Write a program to calculate factorial using function.
#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n,ans;
    printf("Enter a number: ");
    scanf("%d",&n);
    ans = fact(n);
    printf("Factorial of %d is %d.",n,ans);

    return 0;
}