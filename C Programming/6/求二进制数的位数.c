/*求二进制数的位数*/
#include<stdio.h>
int countBinary(int n)/*递归函数countBinnary的定义（用于将非负十进制整数n转换成二进制数，并返回该二进制数的位数）*/
{
	if (n<=1) 
	  return 1;
	else
	  return countBinary(n/2)+1;
}
main()
{
  
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("The binary form of number %d has %d digits.",n,countBinary(n));
   return 0;
   
}
