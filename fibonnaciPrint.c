// Write a program to display Fibonacci series upto n using function.

#include<stdio.h>

void fibb(int n){
    int a=0,b=1;
    int c;
    for(int i=0;i<n;i++){
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibb(n);

    return 0;
}