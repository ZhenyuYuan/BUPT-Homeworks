#include<stdio.h>
main()
{
	int a,b,A,B,C;
	printf("Please input two integers:\n");
	scanf("%d%d",&a,&b);
	printf("number\tsquare\tcube\n");
	for(A=a;A<=b;A=A+1)
    {
    	B=A*A;
    	C=A*A*A;
    	printf("%d\t%d\t%d\n",A,B,C);
    }   	
  system("pause");
  return 0;	
}
