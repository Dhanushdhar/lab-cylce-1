#include<stdio.h>
void main()
{
int a,b,c,avg=0;
printf("Enter the 3 marks");
scanf("%d%d%d",&a,&b,&c);
avg=(a+b+c)/3;
printf("Average=%d\n",avg);
if(avg>=85)
{
printf("grade=A");
}
else if(avg>=70 && avg<85)
{
printf("grade=B");
}
else if(avg>=60 && avg<70)
{
printf("grade=C");
}
else if(avg>=50 && avg<60)
{
printf("grade=D");
}
if(avg<50)
{
printf("grade=F");
}
}
