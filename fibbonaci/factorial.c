#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int factorial(int n){
    
if(n>0){
   
    return factorial(n-1)*n;
}
else{
    return 1;
}

}

int main(){
int n,x;
printf("Enter a number: ");
scanf("%d",&n);
x=factorial(n);
printf("%d",x);

    return 0;
}