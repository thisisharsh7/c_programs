// Write C Program that counts the particular word in the given string. For example in the string " the string is the set of charterers" , Number of occurance of "the" is:2.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    printf("Enter parent string.\n");
    gets(str1);
    int n=strlen(str1);
    printf("\nEnter string whose occurance is to be find in parent string: ");
    gets(str2);
    int i=0;
    int cnt=0;
    while(n>0){
        int k=0;
        char str[100];
        while(str1[i]!=' '){
            str[k++]=str1[i++];
            printf("run1\n");
        }
        if(strcmp(str,str2)){
            cnt++;
        }
        printf("run2\n");
        str[0]='\0';
        k=0;
        n--;
    }

    printf("\n%d",cnt);
    return 0;
}