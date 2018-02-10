/*一维动态数组*/
#include<stdio.h>
#include<stdlib.h>
int *array;
int *Create1(int n)
{
	array=malloc(sizeof(int)*n); /*建立一维数组*/
	return array;
}
main()
{
	int n,i;
	
	printf("Please input n:");
	scanf("%d",&n);
	
	array=Create1(n);/*调用子函数*/
	
	if(array==NULL)/*判断是否成功分配到内存*/
	  printf("Out of memory\n");
	else
	{
	 printf("Please input %d integers:\n",n);
	 for(i=0;i<=n-1;i++)
	   scanf("%d",array+i);
    }    
    for(i=0;i<=n-1;i++)/*输出数组*/
	{
	  printf("%d ",*(array+i)*(-10));
	  if(i==n-1)
	    printf("\n");
    }
	free(array);/*释放一维数组*/
    array=NULL;
	
	system("pause");
	return 0;	
}
