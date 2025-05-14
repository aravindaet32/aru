//Write a program that calculates the area of a rectangle given length and width
#include<stdio.h>
int main(){
    int l,b,area;
    printf("enter the value of l and b:");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area of rectangle is:%d",area);
}