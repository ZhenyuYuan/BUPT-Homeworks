#include<stdio.h>
#include<stdlib.h>
int main()
{
	
 double s=0;
 int a=1,b,i;
 printf("请输入周一至周五各天销售情况（产品号，销售量），产品号为-1代表该天输入结束\n");
 for(i=1;i<=5;i++)
  { 
   printf("周%d销售情况\n",i);
   do
   {
    scanf("%d",&a);
    if(a!=-1)
     {
   	  scanf(",%d",&b);
      switch(a)
      {
       case 1:
     	 s=s+b*2.98;
     	 break;
       case 2:
     	 s=s+b*4.50;
         break;
       case 3:
    	 s=s+b*9.98;
    	break;
       case 4:
         s=s+b*4.49;
         break;
       case 5:
         s=s+b*6.87;
         break;
   	  }
     }
   }   
   while(a!=-1);
  }
  printf("本周销售总额为%lf",s);
  system("pause");
  return 0;
}
