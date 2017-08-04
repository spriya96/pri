#include<stdio.h>
int main(void)
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n>0)
printf("the number is positive");
else if(n<0)
printf("the number is negative");
else
printf("the number is equal to zero");
return 0;
}
