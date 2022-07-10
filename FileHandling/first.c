#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    FILE *nFile;
    nFile = fopen("harsh.txt","r");
    // char str[30];
    // int age= 20;
    // char ch;
    // char st[100];
    // char s[100];
    // char a[15];
    // char b[15];
    char c;
    if(nFile == NULL){
        printf("File is not available.");
    }else{

        // printf("File is available u can write in it.");
        // for(int i=0;i<strlen(str);i++){
        //     fputc(str[i],nFile);
        // }
        // fputs(str,nFile);
        // fprintf(nFile,"%s\t%d",str, age);
        // while(!feof(nFile)){
        //     ch = fgetc(nFile);
        //     printf("%c",ch);
        // }
        // fscanf(nFile,"%s %s",st,s);
        // printf("%s %s",st,s);
        // fgets(a,15,nFile);
        // fgets(b,15,nFile);
        // printf("%s\n",a);
        // printf("%s",b);
        while(!feof(nFile)){
            putchar(fgetc(nFile));
        }
        fclose(nFile);
    }



    return 0;
}