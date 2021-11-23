#include<stdio.h>
void main()
{
int n,i,a=0,b=0,num;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&num);
}
if(num>a)
{
b=a;
a=num;
}
else if(num>b)
{
b=num;
}
printf("\n Second highest number=%d",b);
}