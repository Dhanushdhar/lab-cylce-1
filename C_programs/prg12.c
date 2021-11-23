#include<stdio.h>
int main()
{
int a=0,b=1,n,c,s=1,i;
printf("Enter the number of terms ");
scanf("%d",&n);
for(i=2;i<n;i++)
{

c=a+b;
a=b;
b=c;
s=s+c;
}
printf("The sum is %d",s);
return 0;
}
