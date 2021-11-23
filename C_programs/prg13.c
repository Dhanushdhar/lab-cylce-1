#include<stdio.h>
void main()
{
int a,b,i,c=0;
printf("Enter two numbers between which you have to find odd numbers");
scanf("%d%d",&a,&b);
printf("the odd numbers between %d and %d are:\n",a,b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
c++;
printf("%d\t",i);
}
}
printf("\n");
printf("The number of odd numbers is %d",c);

}