/*进制转换*/
#include<stdio.h>
int convert(int n)/*递归函数convert的定义（用于将二进制数转化为十进制数）*/ 
{
  if(n==0||n==1)
    return n;
  else
    return (n%10+convert(n/10)*2);	
}
main()
{  
  
  int n;
  printf("Please input an integer:");
  scanf("%d",&n);
  printf("The result is:%d",convert(n));
  return 0;	
   
}
