//  Write a program in C to count a number of words and characters in a file. 

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    FILE* nfile;
    nfile = fopen("harsh.txt","r");
    int wcnt=0;
    int chcnt=0;
    char str[100];

    if(nfile==NULL){
        printf("\nNo file is available.\n");
    }else{
        while(!feof(nfile)){
            fscanf(nfile,"%s",str);
            wcnt++;
            chcnt+=strlen(str);
        }
        // printf("\nfile is available for read.\n");
        fclose(nfile);
    }
    printf("The number of words and charcters in the given file is %d and %d.",wcnt,chcnt);

    return 0;
}