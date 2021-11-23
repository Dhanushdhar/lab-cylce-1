#include<stdio.h>
void main()
{
int a,b,i,avg,sum=0,c=0;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
sum=sum+i;
c++;
}
}
avg=sum/c;
printf("The average of odd numbers between two numbers=%d",avg);
}
