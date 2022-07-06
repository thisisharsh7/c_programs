// Write a C program that prints below pattern using nested loop?
    //              A 
    //            A B A
    //          A B C B A
    //        A B C D C B A

#include<stdio.h>

int main(){
    char ch='A';
    // ch++;
    // printf("%c",ch);
    for(int i=0;i<4;i++){
        for(int j=3-i;j>0;j-- ){
            printf("   ");
        }
        for(int j=0;j<=i;j++){
            printf(" %c ",ch+j);
        }
        for(int j=i;j>0;j--){
            printf(" %c ",ch+j-1);
        }
        
        printf("\n");

    }


    return 0;
}