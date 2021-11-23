#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	if(a%b==0)
	{
		printf("The number %d is divisible by %d",a,b);
	}
	else
	{
		printf("The number %d is not divisible by %d",a,b);
	}
	return 0;
}