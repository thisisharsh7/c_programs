// Write C Program to generate two random numbers between 1 to 100.
#include<stdio.h>
#include<stdlib.h>//generateRandom number

int main(){
    for(int i=0;i<2;i++){
        int num=rand()%100+1;
        printf("%d\n",num);
    }


    return 0;
}