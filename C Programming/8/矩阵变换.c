/*矩阵变换*/
#include<stdio.h>
#include<stdlib.h>
void RowChange(int a[][100],int total[],int n)
{
   int i,j,temp,k;
                         
   for(k=1;k<=n-1;k++)/*交换满足条件的两行及其平均值*/ 
   {
   	 for(i=0;i<=n-1;i++)  
      if(total[i]>total[i+1]&&i<=n-2) 
       {
        for(j=0;j<=n-1;j++)  
          {  
           temp=a[i][j];
		   a[i][j]=a[i+1][j];
		   a[i+1][j]=temp;
		  }    
        temp=total[i];
	    total[i]=total[i+1];
		total[i+1]=temp; 
       }
    }  
   
    for(i=0;i<=n-1;i++)/*输出经过行变换后的新矩阵*/
    { 
      for(j=0;j<=n-1;j++)
         printf("%d ",a[i][j]);
	  printf("\n");	  
    }
}
int main()
{
   int a[100][100],n,i,j,sum,total[100]={0};
   printf("Please input row of the matrix:");
   scanf("%d",&n);
   
   printf("Please input elements of the matrix:\n");/*读入二维数组a[]并将每行元素的和存入数组total[]中*/
   for(i=0;i<=n-1;i++)
    {
	 sum=0;
     for(j=0;j<=n-1;j++)
       {          
       	 scanf("%d",&a[i][j]);        	
		 sum+=a[i][j];			      	   
       } 
      total[i]=sum;
    }
   printf("The result is:\n");
   
   RowChange(a,total,n);/*调用子函数*/
  
   system("pause");
   return 0;
} 
