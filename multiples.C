#include<stdio.h>
int main()
{
int n,multiple=1,i;
printf("enter the number n=");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
multiple=multiple*n;
}
printf("first 5 multiples is %d",multiple);
return 0;
}
