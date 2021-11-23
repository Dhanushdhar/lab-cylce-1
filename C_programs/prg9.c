#include<stdio.h>
void main()
{
clrscr();
int year,i,year1;
printf("Entered the year");
scanf("%d",&year);
if(((year%4==0) && (year%100!=0))||(year%400==0))
{
printf("The entered year is leap year\n");
}
else
{
printf("The entered year is not a leap year\n");
}
printf("Entered the year upto which you have to find the leap years");
scanf("%d",&year1);
for(i=year;i<=year1;i++)
{
if(((i%4==0) && (i%100!=0))||(i%400==0))
{
printf("%d is a leap year\n",i);
}
}
}