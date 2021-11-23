#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("The number %d is greater than %d\n",a,b);
	}
	else if(b>a)
	{
		printf("The number %d is greater than %d\n",b,a);
	}
	else
	{
		printf("The numbers are equal\n");
	}
	printf("After Swapping\n");
	temp=a;
	a=b;
	b=temp;
	printf("The new value of first number is %d\n",a);
	printf("The new value of second number is %d",b);
	
	return 0;
	
}