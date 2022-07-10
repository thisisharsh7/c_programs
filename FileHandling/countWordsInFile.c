//  Write a program to read a file and count number of words in the file.

#include<stdio.h>
#include<conio.h>

int main(){
    FILE* nfile;
    nfile = fopen("harsh.txt","r");
    int cnt=0;
    char str[100];

    if(nfile==NULL){
        printf("\nNo file is available.\n");
    }else{
        while(!feof(nfile)){
            fscanf(nfile,"%s",str);
            cnt++;
        }
        // printf("\nfile is available for read.\n");
        fclose(nfile);
    }
    printf("The number of words in the given file is %d.",cnt);

    return 0;
}