#include<stdio.h>
int palindrome(int n)
{
int sum=0;
int temp;
while(n!=0)
{
temp=n%10;
sum=(sum*10)+temp;
n=n/10;
}
return sum;
}
int main()
{
int n,sum;
printf("enter a no. \n");
scanf("%d",&n);
sum=palindrome(n);
if(sum==n)
{ printf("%d is a palindrome",n);
}
else 
{
printf("%d is not a palindrome",n);
}
return 0;
}


