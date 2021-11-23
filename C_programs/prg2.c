#include<stdio.h>
int main()
{
	float fah,c;
	printf("Enter the temperature in fahrenheit");
	scanf("%f",&fah);
	c=(fah-32)*.555555555;
	printf("The celsius degree is =%f",c);
return 0;
}
