#include<stdio.h>
void main()
{
int n,r,temp,sum=0;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
{
printf("The given number is armstrong");
}
if(temp!=sum)
{
printf("The given number is not armstrong");
}
}