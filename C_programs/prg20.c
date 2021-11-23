#include<stdio.h>
void main()
{
int n,rem,sum=0,temp;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=(sum*10)+rem;
n=n/10;
}
if(sum==temp)
{
printf("the number is a palindrome");
}
if(sum!=temp)
{
printf("the number is  not a palindrome");
}
}