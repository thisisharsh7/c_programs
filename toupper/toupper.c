#include<stdio.h>
#include<stdlib.h>

int main(){

    char str[100];
    printf("Enter the string: ");
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        char ch;
        ch=toupper(str[i]);
        printf("%c",ch);
    }
    
    return 0;
}