#include<stdio.h>
struct complex
{
float real;
float imag;
};
struct complex getcomplex()
{
struct complex r;
printf("Enter the real and imaginary part \n");
scanf("%f%f",&r.real,&r.imag);
return r;
}
showcomplex(struct complex a)
{
printf("the real part of the complex no. is %f \n",a.real);
printf("the imaginary of the complex no. is %f \n",a.imag);
}
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return c;
}
int main()
{
struct complex a=getcomplex();
struct complex b=getcomplex();
struct complex c=add(a,b);
showcomplex(c);
return 0;
}

