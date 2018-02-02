#include<stdio.h>
int main()
{
int n,multiple=1,i;
printf("enter the number n=");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
multiple=n*i;
printf("%d\t",multiple);
}
  return 0;
}
