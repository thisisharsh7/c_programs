// Write a program in C to read an existing file. 

#include<stdio.h>

int main(){
    FILE* rFile;
    rFile = fopen("harsh.txt","r");
    if(rFile==NULL){
        printf("File is not available");
    }else{
        while(!feof(rFile))
            putchar(fgetc(rFile));
        
        fclose(rFile);
    }


    return 0;
}