#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Prime(int n,int i){
if( n==0){return 0;}
Prime(n-1,i);
if(i%n==0 ||i==1 || i==0 ){return 0;}
else{return 1;}
}

int main(){
 
    if(Prime(9,10)){cout<<"Yes";}
    else{cout<<"No";}


    return 0;
}