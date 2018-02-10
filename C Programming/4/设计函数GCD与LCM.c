#include<stdio.h>
#include<stdlib.h>
main()
{
   
   int a,b,r,s=1,m,n,x,y;
   printf("Please input two intergers:");
   scanf("%d%d",&a,&b);
   x=a;
   y=b;
   if(a<b)
    {
      r=a;
      a=b;
      b=r;
    }
   while(s!=0)
    {
   	  s=a%b;
   	  a=b;
	  b=s;
    }
   m=a;
   n=x*y/m;
   printf("The greatest common divisor is %d and the lowest common multiple is %d",m,n);
   system("pause");
   return 0;
   
}
