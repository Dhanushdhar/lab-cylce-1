#include<stdio.h>
int main()
{
int a1=0,a2=1,a3,n,i;
printf("Enter the number upto which");
scanf("%d",&n);
printf("%d\t",a1);
printf("%d\t",a2);
for(i=1;i<=n-2;i++)
{
a3=a1+a2;
printf("%d\t",a3);
 a1 = a2;
 a2 = a3;
}
}