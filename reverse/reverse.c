#include<stdlib.h>

int main(){
    int n,r,k=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("After Reversing: ");
    while(n>0){
        r=n%10;
        n=n/10;
        k=k*10+r;
    }
    printf("%d",k);

    return 0;
}