//Write a program in C to write multiple lines in a text file.

#include<stdio.h>
#include<string.h>

int main(){
    FILE* wFile;
    wFile = fopen("lines.txt","w");
    char write[100];
    printf("Enter the number of lines you want to write in the file:: ");
    int n;
    scanf("%d",&n);
    if(wFile==NULL){
        printf("File is not available for write.");
    }else{
        printf("File is available you can write\n");
        for(int i=0;i<=n;i++){
            fgets(write, sizeof write, stdin);
		    fputs(write, wFile);
        }
        fclose(wFile);
    }


    return 0;
}