#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  
  int a,b,c,n,i,s,t=0;  /*n为a到b中的每一个数，i为满足条件的因数，t为计数器*/
  printf("Input three inteders:");
  scanf("%d %d %d",&a,&b,&c);
  printf("The result is:\n");
    for(n=a;n<=b;n++)	
    {
	  	s=0;
	    for(i=1;i<n;i++)
      	{
      	  if(n%i==0)
		  s=s+i;
		}
		if(fabs(n-s)<=c)
		{
	      t++;
          printf("%d\t",n);
         if(t%5==0)
          printf("\n");
        } 
    }
	     if(t==0)
          printf("There is no proper number in the interval");
  system("pause");
  return 0;
    
} 
