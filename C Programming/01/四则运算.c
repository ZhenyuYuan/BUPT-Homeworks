#include<stdio.h>
#include<stdlib.h>
main()
{
      double a,b,c,d,result;
      printf("Please input four float numbers:\n");
      scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
      result=(a+b)*(a-b)+c/d;
      printf("The result is:%lf\n",result);
      system("pause");
      return 0;
}
