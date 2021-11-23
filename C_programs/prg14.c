#include<stdio.h>
void main()
{
int n,m,i,sum=0;
printf("Enter the number upto which we have to print");
scanf("%d",&n);
printf("Enter the number to which it should be divisible");
scanf("%d",&m);
for(i=1;i<=n;i++)
{
if(i%m==0)
{
sum=sum+i;
}
}
printf("Sum=%d",sum);
}