/*二维动态数组*/
#include<stdio.h>
#include<stdlib.h>
int **Creatr2(int n,int m)
{   
    int **array;
    int i; 
	array=(int **)malloc(sizeof(int *)*n);/*建立长度为n的动态指针数组*/	
	for(i=0;i<=n-1;i++)
	  array[i]=malloc(sizeof(int)*m);/*建立长度为m的整型指针数组*/	
    return array;
}
main()
{
	int **array,n,m,i,j;
	
	printf("Please input n and m:");/*输入n和m*/
	scanf("%d %d",&n,&m);
	printf("Please input %d integers:\n",n*m);/*输入n*m个整数*/
	
	array=Creatr2(n,m);/*调用子函数*/
	
	if(array==NULL)/*判断是否成功分配到内存*/
	  printf("Out of memory\n");
	else
	  for(i=0;i<=n-1;i++)
	  {
	    for(j=0;j<=m-1;j++)		
		  scanf("%d",*(array+i)+j); 
	  }	
	
	for(i=0;i<=n-1;i++)/*输出矩阵*/
	  {
	    for(j=0;j<=m-1;j++)
		{
		  printf("%d ",*(*(array+i)+j)*(-10)) ; 
	    }
	    printf("\n");
	  }	
	
	for(i=0;i<n;i++)/*释放一维整型数组*/ 
	  free(array[i]);
	free(array);/*释放指针数组*/

	system("pause");
	return 0;	 	  
}

