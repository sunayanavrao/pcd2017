#include<stdio.h>
int revint(int n)
{
int sum,str;
sum=0;
str=0;
while(n>0)
{
str=n%10;
sum=(sum*10)+str;
n=n/10;
}
return sum;
}
int main()
{
int n,rev;
printf("enter the integer to be reversed \n");
scanf("%d",&n);
rev=revint(n);
printf("the reverse of %d is %d \n",n,rev);
return 0;
}

