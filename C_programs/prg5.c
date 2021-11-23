#include<stdio.h>
int main()
{
	int a,b,sum=0;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	sum=a+b;
	if(sum%2==0)
	{
		printf("The sum of the numbers is even");
	}
	else
	{
		printf("The sum of the numbers is odd");
	}
	return 0;
}