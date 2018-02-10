#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
int main()
{
	int num1,num2,a,b[100],i=0,Q,num3;
	printf("Please input two integers:");
	scanf("%d%d",&num1,&num2);
	printf("The result is:\n");
	while(num1<=num2)
	{
		Q=num1; 
	  for(a=2;num1!=1;)
		{
			if(isPrime(a) && num1%a==0)
					{
						b[i]=a;
						num1=num1/a;
						i++;
						a=2;
					}
			else a++;
		}
	    printf("%d=",Q);
	    i=i-1;
	    num3=i;
	  for(i=0;i<=num3;i++)
		{
		   printf("%d",b[i]);
		  if(i!=num3)
			printf("*");
		}
    	printf("\n");
	    i=0;
	    num1=Q;
	    num1++;
    }
} 
 /*函数 isPrime(判断素数)的定义*/ 
int isPrime (int n)  
{
	int i;
	i = 2; 
	while (i<=sqrt(n) && n%i!=0){
   		i++;	
 	};

	if (i > sqrt(n))
	    return 1;
	else 
         return 0;
}
