// Write a program to input a string and print count of different vowels in it.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[1000];
    char vstr[100];
    gets(str);
    printf("\n");
    // printf("%s",str);
    int n= strlen(str);
    // printf("%d",n);
    int cnt=0;
    for(int i=0;i<n;i++){
        char ch=tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vstr[cnt]=ch;
            cnt++;
        }
    }
    
    printf("%d",cnt);


    return 0;
}