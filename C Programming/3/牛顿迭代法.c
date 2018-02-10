#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  
  int a,b,c,d;
  double x1=1,x2,n,f,F;
  printf("Please input four integers:\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  do
  {
  	f=a*x1*x1*x1+b*x1*x1+c*x1+d;
  	F=3*a*x1*x1+2*b*x1+c;
  	x2=x1-f/F;
  	n=fabs(x2-x1);
  	x1=x2;
  }
  while(n>1e-5);
  printf("The solution is:%lf",x2);
system("pause");
return 0;
  
}

 
