#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d;
	printf("Please input three float numbers:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(fabs(a-0)<=1e-6)
	   printf("The equation is not quadratic.\n");
	else
	{
		
		if(fabs(d-0)<=1e-6)
		  printf("The equation has two equal roots:%.4f\n",(-b)/(2*a));
		else
		  {
		  	if(d>0)
		  	   printf("The equation has two distinct real roots:%.4f and %.4f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
		  	if(d<0)
		  	   printf("The equation has two complex roots:%.4f+%.4f*i and %.4f-%.4f*i\n",(-b)/(2*a),sqrt(-d)/(2*a),(-b)/(2*a),sqrt(-d)/(2*a));
		  }
		
	}
	system("pause");
	return 0;
	
}

