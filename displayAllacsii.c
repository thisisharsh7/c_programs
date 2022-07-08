// Write a program to display all the ascii characters on the screen

#include<stdio.h>

int main(){
    for(int i=0;i<256;i++){
        // char ch = i;
        printf("%c\n",i);
    }

    return 0;
}