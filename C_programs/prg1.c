#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int t,p,n;
	float a,ci,r;
	printf("Enter the principal amount");
	scanf("%d",&p);
    printf("Enter the time in years");
	scanf("%d",&t);
	printf("Enter the rate ");
	scanf("%f",&r);
	printf("Enter the number of times it is compounded ");
	scanf("%d",&n);
	ci= p*pow( (1+((r/n)/100)), (n*t))-p;
	
	printf("The compound interest is %f ",ci);
}
		