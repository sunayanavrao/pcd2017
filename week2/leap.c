#include<stdio.h>
int leap(int y)
{
if(y%400==0)
{ return 0; }
else if(y%100==0)
{ return 1; }
else if(y%4==0)
{return 2; }
else { return -1; }
}
int main()
{
int year,r;
printf("enter the year");
scanf("%d",&year);
r=leap(year);
switch(r)
{
case -1:printf("%d is not a leap year",year);break;
case 0:printf("%d is a quadrennual leap year",year);break;
case 1:printf("%d is a century year but not a leap year",year);break;
case 2:printf("%d is a leap year",year);break;
default: break;
}
return 0;
}


