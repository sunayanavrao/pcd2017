#include<stdio.h>
int getcomplex(float a[][],int n)
{
for(int i=0;i<=n;i++) {
for(int j=0;j<=1;j++)
{
scanf("%f",(&(a[i][j]))); }
}                                                
return 5;
}                                                
int showcomplex(float c,float d,int n) {
printf("Result:Sum of %d complex no.s is",n);    
if(d<0){ printf("%f%fi",c,d);}
else{ printf("%f + %fi",c,d);}
}
int  main()
{int n;
float a[15][2];
printf("Enter the no. Of complex no.s to be adde$
scanf("%d",&n);
getcomplex(a[n][2],n);
float c,d=0;
for(int k=0;k<=n;k++) { c=c+a[k][0];
}
for(int l=0;l<=n;l++) { d=d+a[l][1];
}
showcomplex(c,d,n); return 2;
}
