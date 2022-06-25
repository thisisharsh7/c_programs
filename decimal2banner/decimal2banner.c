#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int a,x;
    int i=0;
    int num;
    int num1=0;
    printf("Enter the number: ");
    scanf("%d",&num);
     while(num>0){
         a=num%2;
         x=a*(pow(10,i));
         printf("x is %d",x);
         num1=num1+x;
         num=num/2;
        
         i++;
     }
     
     printf("the required binary is %lf",num1);
     return 0;
}