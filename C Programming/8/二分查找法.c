/*设计递归函数用二分查找算法查找值为key的数组元素的下标*/
#include<stdio.h>
#include<stdlib.h>
int RecurBinarySearch(int a[],int left,int right,int key[],int j)/*设计递归函数RecurBinarySearch()*/
{
  int middle;
  middle=(right+left)/2;
  if(left<=right)
  { 
    if(key[j]==a[middle])
       return middle;
    else 
     if(key[j]>a[middle])
	   return RecurBinarySearch(a,middle+1,right,key,j);
     if(key[j]<a[middle])
	   return RecurBinarySearch(a,left,middle-1,key,j);
  }
  if(left>right)  
    return -1;  
}
int main()
{
	int a[100000],key[100000],n,m,i,j,left,right;
	
	printf("Please input the number of integers:");/*读入整数n代表数组a中元素的个数*/
	scanf("%d",&n);	
	printf("Please input the number you want to search:");/*读入整数m代表需要查找的整数的个数*/
	scanf("%d",&m);
	
	printf("Please input the integers:");/*输入n个整数存放在数组a中*/
	for(i=0;i<=n-1;i++)
	   scanf("%d",&a[i]);
	   
	printf("Please input the integers you want to search:");/*输入m个要查找的数*/
	for(j=0;j<=m-1;j++)
	  scanf("%d",&key[j]);
	  
	printf("The elements'subscript in the array are:");
	for(j=0;j<=m-1;j++)
	 {	    
	    left=0;
	    right=n-1;	  	
	  	printf("%d ",RecurBinarySearch(a,left,right,key,j));/*调用子函数RecurBinarySearch()*/
	  	if(j==m-1)
	  	  printf("\n");
	  } 
	  
	system("pause");
	return 0;
}
