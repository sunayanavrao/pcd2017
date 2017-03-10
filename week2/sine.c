#include<stdio.h>
#include<math.h>
float convert_rad(float x);
float sine(float x)
{
float term,prev,sum,diff;
int i;
term=sum=diff=x;
for(i=3;diff>0.000001;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
int main()
{
float degree,sin,rad;
printf("enter the angle \n");
scanf("%f",&degree);
rad=convert_rad(degree);
sin=sine(rad);
printf("result: sine(%f)=%f",degree,sin);
return 0;
}
float convert_rad(float x)
{
return ((3.1412/180)*x);
}

