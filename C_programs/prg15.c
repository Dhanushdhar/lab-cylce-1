#include<stdio.h>
void main()
{
int a,b,i,c=0;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
printf("the numbers divisible by 7 are:\n");
for(i=a;i<=b;i++)
{
if(i%7==0)
{
printf("%d\t",i);
c++;
}
}
printf("\n");
printf("There are %d numbers divisible by 7",c);
}