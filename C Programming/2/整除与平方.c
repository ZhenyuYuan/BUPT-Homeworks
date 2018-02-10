#include<stdio.h>
main()
{
	
	int n,i,result=0;
	printf("Please input an integer:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	   if(i%3==0&&i%7==0)
		  result+=i;
	}
	result*=result;
	printf("The result is:%d",result);
    system("pause");
	return 0;
	
}
