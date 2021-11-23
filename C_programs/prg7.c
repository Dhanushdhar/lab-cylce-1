#include<stdio.h>
 void main()
{
int a,b,c;
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("The number %d is greatest",a);
}
else
{
printf("The number %d is greatest",c);
}
}
else 
{
	if(b>c)
{
	
printf("The number %d is greatest",b);
}
else
{
printf("The number %d is greatest",c);
}
}
}