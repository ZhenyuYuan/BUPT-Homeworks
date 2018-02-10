#include<stdio.h>
#include<math.h>
main()
{
	
	int n;
	double x,d=1,result=1;
	printf("Please input an float number:\n");
	scanf("%lf",&x);
	if(x<=20)
	{
		
		for(n=1;fabs(d)>=1e-8;n++)
		  {
		  d*=x/n; 
		  result+=d;
          }
		  
	}
	else 
	  {
	  printf("Please input a right number.\n");
	  system("pause");
	  return 0;
	  }   
	printf("The result is:%.4lf\n",result);
	printf("%.4lf\n",exp(x));
	system("pause");
	return 0; 
	  
}
