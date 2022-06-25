#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int fibonacci(int a,int b){
    int c;
    static int i=12;
    c=a+b;
    printf("%d\n",c);
    if(c<50){
    fibonacci(b,c);
    i--;
    }
    }


int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    fibonacci(a,b);
     



    return 0;
}