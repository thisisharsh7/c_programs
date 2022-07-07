// Write a program to display Fibonacci series upto n using recursion.
#include<stdio.h>

int fibb(int n){
    // int a=0,b=1;
    // int c;
    // for(int i=0;i<n;i++){
    //     c=a+b;
    //     printf("%d ",a);
    //     a=b;
    //     b=c;
    // }
    static int a = 0 , b = 1, c;
   if(n>0){ c= a+b;
    printf("%d ",a);
    a=b;
    b=c;}
    fibb(n-1);
    
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibb(n);

    return 0;
}