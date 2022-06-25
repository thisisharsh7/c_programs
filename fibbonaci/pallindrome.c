#include<stdlib.h>
#include<stdio.h>

int pallindrom(char* c,int l,int r){
if( NULL==c || l<0 || r<0  || l>=r){
  return 1;
}else if(c[l]==c[r]){
   return pallindrom(c,l+1,r-1);
}return 0;

}

int main(){
   char c[100];
    printf("Enter a word");
    scanf("%s",c);
if(pallindrom(c,0,strlen(c)-1)){
    printf("Yes");
}else{
    printf("No");
}



    return 0;
}