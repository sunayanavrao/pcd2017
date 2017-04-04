GNU nano 2.7.4         File: paln.c

#include<stdio.h>
int palindrome(int n)
{
 int sum=0;
while(n!=0)
{
sum=(sum*10)+(n%10);
n=n/10;
}
return sum;
}                                                       int main()
{                                                       int n,sum;
printf("enter a no. \n");
scanf("%d",&n);
sum=palindrome(n);
if(sum==n)
{
printf("%d is a palindrome",n);
}
else { printf("%d is not a palindrome",n);
}
return 0;
}
