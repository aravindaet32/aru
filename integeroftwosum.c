//Write a C program that asks the user to enter two integers and prints their sum.
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is:%d",sum);
}