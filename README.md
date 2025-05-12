#include<stdio.h>
int main()
{
    float principle,rate,time,simpleIntrest;
    printf("enter princple amount:");
    scanf("%f",&principle);
    printf("enter rate of intrest(in %%):");
    scanf("%f",&rate);
    printf("enter time (in years)");
    scanf("%f",&time);
    simpleIntrest=(principle*rate*time)/100;
    printf("simple Intrest=%.2f\n", simpleIntrest);
    return 0;
}
