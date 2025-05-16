#include<stdio.h>
struct Address{
    char city[20];
    int pin;
};
struct Employee{
    char name[50];
    int id;
    struct Address addr;
};
int main(){
    struct Employee emp;
    printf("Enter name:");
    scanf("%s",emp.name);
    printf("Enter city:");
    scanf("%s",emp.addr.city);
    printf("Enter pin:");
    scanf("%d",&emp.addr.pin);
    printf("\nEMPLOYEE DETAILS\n");
    printf("Name:%s\n City:%s\n Pin:%d\n",emp.name,emp.addr.city,emp.addr.pin);
}