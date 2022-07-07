// Write C Program that counts the particular word in the given string. For example in the string " the string is the set of charterers" , Number of occurance of "the" is:2.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    printf("Enter parent string.\n");
    gets(str1);
    printf("\nEnter string whose occurance is to be find in parent string: ");
    gets(str2);
    int n = strlen(str1),m = strlen(str2),cnt = 1,j;
    for(int i=0;i<n;i++){
        char rev[m];
        int j=0;
        while(str1[i]!=' ' && i<n ){
            rev[j]+= str1[i];
            j++;
            i++;
        }
        printf("%s ", rev);
    }
    
    

    // printf("\n%d",cnt);
    return 0;
}