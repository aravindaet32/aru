#include <stdio.h>
int main()
{
    int arr[10]={4,2,6,7,8},i;
    int *aru=arr;
    for(i=0;i<5;i++){
        printf("%d ",*(aru+i));
        printf("%p ",aru+i);
    }
}

