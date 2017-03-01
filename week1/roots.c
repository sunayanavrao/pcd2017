#include<stdio.h>
#include<math.h>

struct complex{
float real,img;
};
struct quad{
struct complex r1,r2;
};

int roots(float a,float b,float c,struct quad *r)
{
if(a==0)
{
return -1;
}
float d=((b*b)-(4*a*c));
if(d==0)
{
r->r1.real=r->r2.real=((-b)/(2*a));
r->r1.img=r->r2.img=0;                           return 0;
}
if(d>0)
{
r->r1.real=(-b+sqrt(d))/(2*a);
r->r2.real=(-b-sqrt(d))/(2*a);
r->r1.img=r->r2.img=0;
return 1;
}
r->r1.real=r->r2.real=(-b)/(2*a);
r->r1.img=(sqrt(-d))/(2*a);
r->r2.img=(-sqrt(-d))/(2*a);
return 2;
}
int main()
 {
float a,b,c;
struct quad r;
printf("enter the coefficients of the quadratic equation a,b and c");
scanf("%f%f%f",&a,&b,&c);
 roots(a,b,c,&r);
printf("Solution:Root 1 \n The real part of root1 is %f \n",r.r1.real);
printf(" The imaginary part of root1 is %f \n",r.r1.img);
 printf("Root 2  \n The real part of root2 is %f \n",r.r2.real);
printf("The imaginary part of root2 is %f \n",r.r2.img);
return 5;
}

