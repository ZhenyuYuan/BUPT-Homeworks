/*蛇形矩阵*/
#include<stdio.h>
#include<stdlib.h>
int a[100][100];
void getMatrix(int n)
{
 int i,j,num=1;
 for(i=1;i<=n;i++)/*将整数1~n*n按照蛇形的顺序装入一个n*n的矩阵中*/
    for(j=1;j<=i;j++)
    {
      if(i%2==0) a[i+1-j][j]=num;
      else a[j][i+1-j]=num;
      num++;
    }
  for(i=n+1;i<2*n;i++)
    for(j=1;j<=2*n-i;j++)
    {
      if(i%2==0) a[n+1-j][i-n+j]=num; 
      else a[i-n+j][n+1-j]=num;
      num++;
    }
}

main()
{
  int i,j,n;
  printf("Please input order of the snake matrix:");/*输入一个整数n,代表蛇形矩阵的阶数*/ 
  scanf("%d",&n);
  
  getMatrix(n);/*调用子函数*/
  
  printf("The snake matrix is:\n");/*输出蛇形矩阵*/
  for(i=1;i<=n;i++)
   {    
     for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
	 printf("\n");
   }
   
   system("pause");
   return 0;
}
