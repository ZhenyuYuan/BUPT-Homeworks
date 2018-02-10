/*设计函数int judgeTriangle(int a,int b,int c)判断三角形形状*/
#include<stdio.h>
int judgeTriangle(int,int,int);
main()
{
  int a,b,c; /*a,b,c为三角形三边长*/ 
  printf("Please input three integers:");
  scanf("%d%d%d",&a,&b,&c);
  switch(judgeTriangle(a,b,c))
  {
    case -1:
      printf("It is not a triangle.\n");
      break;
    case 0:
      printf("It is a scalenous triangle.\n");
      break;
    case 1:
      printf("It is a right-angled triangle.\n");
      break;
    case 2:
      printf("It is a isosceles triangle.\n");
      break; 
    case 3:
      printf("It is a equilateral triangle.\n");
      break; 
   }
   system("pause");
   return 0;   
}
/*函数judgeTriangle的定义*/
int judgeTriangle(int a,int b,int c)
{
  if(a+b<c||a+c<b||b+c<a)
    return -1;
  else 
  {
    if((a*a+b*b)==c*c||(a*a+c*c)==b*b||(b*b+c*c)==a*a) 
       return 1;
    else 
    {
      if(a==b&&a==c&&b==c)
         return 3;
      else 
       {
         if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
           return 2;
         else return 0;
       }
    }   
  }
} 
