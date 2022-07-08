// Write C Program to compute the surface area and volume of a cube.

#include<stdio.h>

int main(){
    int l,s,v;
    printf("Enter the length of the side of the cube: ");
    scanf("%d",&l);
    s=6*l*l;
    v=l*l*l;
    printf("The required surface area and volume of the cube of side length %d are %d and %d respectively.",l,s,v);

    return 0;
}