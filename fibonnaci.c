//Write down a recursive function fab to computes Fibonacci of the nth number. Assume fab(1)=0 & fav(2)=1.
#include<stdio.h>

int fav(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
       return 1;
    }
    return fav(n-1)+fav(n-2);

}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int x=fav(n);
    printf("%d",x);

    return 0;
}
