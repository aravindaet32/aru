#include<stdio.h>
struct student{
    char name[50];
    float marks;
};
int main(){
    struct student students[3];
    float total,average;
    int i;
    for(i=0;i<3;i++){
        printf("Enter name of the  %d student\n",i+1);
        scanf("%s",&students[i].name);
        printf("Enter marks:");
        scanf("%f",&students[i].marks);
        total=total+students[i].marks;
    }
    average=total/3;
    printf("Average of the 3 Students = %.2f\n",average);
}