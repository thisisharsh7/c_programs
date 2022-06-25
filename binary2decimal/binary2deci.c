#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
      int a,r,x;
      
      int i=0,num=0;
     
      printf("Enter a binary number: ");
      scanf("%d",&a);
      while(a>0){r=a%2;
       x=pow(2,i);
       
       num=num +(x*r);
      i++;
      a=a/10;}
      printf("decimal number of given binary is %d",num);
      


    return 0;
}

