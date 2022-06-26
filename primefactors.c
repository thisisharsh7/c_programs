// Write C Program to print prime factors of a input number >=4
#include<stdio.h>

int main(){
    int  n;
    scanf("%d",&n);
    int a[100000];
    for(int i=2;i<=n;i++){
        if(a[i]!=-1){
            a[i]=1;
        }
        for(int j=2*i;j<=n;j+=i){
            a[j]=-1;
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==1 && n%i==0){
            printf("%d ",i);
        }
    }



    return 0;
}