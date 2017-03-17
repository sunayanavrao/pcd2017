#include<stdio.h>
int bubble(int n,int a[n])
{
int i,j,temp;
for(j=0;j<n;j++)
{
for(i=0;i<n-1;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}}}
return a;
}
int get(int n,int a[n])
{
for(int k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
return  a;
}
void show(int n,int a[n])
{
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
int main()
{
int n;
printf("enter the no.of elements to be sorted \n");
scanf("%d",&n);
int a[n];
printf("enter the numbers \n");
get(n,a);
bubble(n,a);
printf("the array after sorting is \n");
show(n,a);
return 0;
}
