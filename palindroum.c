# include<stdio.h>
int main()
{
 int num,reversed=0,rem,original;
 printf("enter the number");
 scanf("%d",&num);
 original=num;
 while(num!=0){
 rem=num%10;
 reversed=reversed*10+rem;
 num/=10;
}
if(reversed==original){
printf("the number is palindroum");
}
else{
    printf("not a palindroum");    
    }
}
   
