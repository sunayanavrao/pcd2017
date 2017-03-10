#include<stdio.h>
float find_root(float x)
{
float m,n;
n=0.0001;
for(m=0;m<x;m=m+n)
{
if((m*m)>x)
{
m=m-n;
break;
}
}
return m;
}
int main()
{
float x,root;
printf("enter a no. \n");
scanf("%f",&x);
root=find_root(x);
printf("square root of %f is %f \n",x,root);
return 0;
}

