#include<stdio.h> 
#include<math.h>
float root(float num) 
{
float c,a,b=num/2; 
do{
c=b; 
a=b-(((b*b)-num)/(2*b));
b=a;                                             
}while((fabs(a-c))>0.000001);
return a;
}
int main()
{ 
float p,n;
printf("enter a number: \n");
scanf("%f",&n);
p=root(n);
printf("\n root is %f",p);
return 0;
}
