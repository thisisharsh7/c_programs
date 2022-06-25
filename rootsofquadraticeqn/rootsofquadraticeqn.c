#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
   double a,b,c;
printf("enter the coefficient of x^2,x^1 and constant term: ");
scanf("%lf %lf %lf",&a,&b,&c);
double d;
double root1,root2;
d=b*b-4*a*c;

if(d==0){
    root1=-b/(2*a);
    root2=-b/(2*a);
printf("roots are: %.2lf %.2lf",root1,root2);
}else if(d>0){
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("roots are: %.2lf %.2lf",root1,root2);
}else{
    double ip;
     root1=-b/(2*a);
    root2=-b/(2*a);
    ip=sqrt(-d)/(2*a);
    printf("roots are: %.2lf+%.2lfi %.2lf-%.2lfi",root1,ip,root2,ip);
}



    return 0;
}