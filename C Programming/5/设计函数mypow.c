#include<stdio.h>
int main()
{ 
    
  int x,n;
  printf("Please input two integers:",x,n);
  scanf("%d%d",&x,&n);
  printf("The result is:%ld",mypow(x, n));
  system("pause");
  return 0;
  
}
/*函数mypow的定义 */
int mypow(int x,int n)
{ 
  int x0,i;
  x0=x;
  for(i=1;i<n;i++)
  {
   x=x*x0;
  }
  return x;
}
