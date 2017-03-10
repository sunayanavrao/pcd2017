#include<stdio.h>
int find_poly(int x,int n,int a[n])
{
int sum,i;
for(i=n-1;i>0;i--)
{
sum=(sum+a[i])*x;
}
sum=sum+a[0];
return sum;
}
int main()
{
int n;
printf("enter the degree of the polynomial \n");
scanf("%d",&n);
int a[n+1];
printf("enter the coeffiecients a(n) a(n-1)...a(0) \n");
for(int i=n;i>=0;i--)
{
scanf("%d",&a[i]);
}
int x,sum,k;
k=n+1;
printf("Enter x");
scanf("%d",&x);
sum=find_poly(x,k,a);
printf("result= %d",sum);
return 0;
}


