#include<stdio.h>
int a,b,s=0;
void main()
{

char ch;

	printf("Enter the numbers");
	scanf("%d%d",&a,&b);
	printf("Enter your choice");
	scanf("%s",&ch);
	switch(ch)
	{
	
	case '+' :
		s=a+b;
		printf("Sum=%d",s);
		break;
	case '-' :
		s=a-b;
		printf("Difference=%d",s);
		break;
	case '*' :
		s=a*b;
		printf("Multiplication=%d",s);
		break;
	case '/' :
		s=a/b;
		printf("Division=%d",s);
		break;
	case '%' :
		s=a%b;
		printf("Reminder=%d",s);
		break;
	default:printf("Wrong Choice");
	break;
}
}
