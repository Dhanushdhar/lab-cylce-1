#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
float disc,root1,root2,img;
printf("enter the coefficients a,b,c(ax^2+bx+c)");
scanf("%f %f %f",&a,&b,&c);
printf("The equation is %.1fx^2+%.1fx+%.1f\n",a,b,c);
disc=(b*b)-(4*a*c);
if(disc>0)
{
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);
printf("the roots of the numbers are %.1f and %.1f",root1,root2);
}
else if(disc=0)
{
root1=root2=-b/(2*a);
printf("the roots of the numbers are %.1f and %.1f",root1,root2);
}
else if(disc<0)
{
root1=root2=-b/(2*a);
img=sqrt(-disc)/(2*a);
printf("the two complex roots are :%.2f +i%.2f and %.2f -i%.2f",root1,img,root2,img);
}
}
