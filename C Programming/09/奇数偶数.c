/*奇数偶数*/
#include<stdio.h>
int main()
{
	int a[200],b[200],n,i,j=0,num,m=0;

	printf("Please input the number of integers:");/*输入整数个数n*/ 
	scanf("%d",&n);
	
	printf("Please input the integers:");/*输入n个整数*/
	for(i=0;i<=n-1;i++)
	{
	   scanf("%d",&num);
	   a[i]=num;
	}

	printf("The elements of the new array are:");
	for(i=0;i<=n-1;i++)
	{
	  if(a[i]%2==0)
	    printf("%d ",a[i]);/*输出偶数*/
	  else
	   { 
	     m++;
	     b[j]=a[i];/*将奇数存入数组b中*/
	     j++;  
	   }    
	}

	for(j=0;j<=m-1;j++)/*输出奇数*/
	{
	   printf("%d ",b[j]);
	   if(j==m-1)
	     printf("\n");
    }

	system("pause");
	return 0;
} 
