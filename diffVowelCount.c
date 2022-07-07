// Write a program to input a string and print count of different vowels in it.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    printf("\n");
    // printf("%s",str);
    int n= strlen(str);
    // printf("%d",n);
    int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0;
    for(int i=0;i<n;i++){
        char ch=tolower(str[i]);
        switch (ch)
        {
        case 'a':
            acnt++;
            break;
        case 'e':
            ecnt++;
            break;
        case 'i':
            icnt++;
            break;
        case 'o':
            ocnt++;
            break;
        case 'u':
            ucnt++;
            break;
        
        default:
            break;
        }
    }
    printf("The count of a , e , i , o and u is %d , %d , %d , %d and %d respectively.\n",acnt,ecnt,icnt,ocnt,ucnt);


    return 0;
}