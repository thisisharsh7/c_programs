#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    //one way
    /*printf("Enter two numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    reverse(a,b);
    printf("%d %d",a, b);*/
    //second way
    printf("Enter two numbers: ");
    int a[2];
    for(int i=0;i<2;i++){
        scanf("%d",&a[i]);
    }
    printf("Reversed \n");
     for(int i=2;i>0;i--){
        printf("%d",a[i-1]);
    }

    return 0;
}
