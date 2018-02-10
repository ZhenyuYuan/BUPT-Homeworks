/*用插入排序法将数组a的元素按照升序方式排序*/
#include<stdio.h>
#include<stdlib.h>
void InsertSort(int a[],int n)/*函数的定义*/
{
  int i,j,x;
  for(i=2;i<=n;i++)
  { 
    x=a[i]; 
	j=i-1;  
    while(x<a[j]&&j>=1)      	      
	{	 
	  a[j+1]=a[j];	 	 	 
	  j--;
	}   
	a[j+1]=x;
  }
}
int main()
{
  int a[1000],n,i;
  printf("Please input the number of integer:");/*输入整数n，代表待排元素的个数*/
  scanf("%d",&n);
 
  printf("Please input the integers:");/*输入n个整数*/
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);      
  
  InsertSort(a,n);/*调用函数InsertSort()*/
  
  printf("The result is:"); 
  for(i=1;i<=n;i++)/*输出排列后的数组*/
    printf("%d ",a[i]);
  system("pause");
  return 0;
}
