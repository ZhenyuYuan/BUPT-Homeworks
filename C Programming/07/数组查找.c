/*Êı×é²éÕÒ*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[1000],n,m,i,j,num,x;
	printf("Please input the number of integers:");
	scanf("%d",&n);
	printf("Please input the integer:");
	for(i=0;i<=n-1;i++)
	   scanf("%d",&a[i]);
	printf("Please input the times of query:");
	scanf("%d",&m);
	printf("Please input the integers you want to query:");
    for(j=0;j<=m-1;j++)
	{  
       x=0;
	   scanf("%d",&num);
	   for(i=0;i<=n-1;i++)
	   {   
	     if(a[i]==num)
		 {
		  if(i>=1&&i<=n-2)
		    printf("%d %d\n",a[i-1],a[i+1]);
		  if(i==0)
		    printf("%d\n",a[1]);
		  if(i==n-1)
		    printf("%d\n",a[n-2]);
          x=1;
         }  	
       }     
       if(x==0)
         printf("NULL\n"); 
    }   
   
    system("pause");
    return 0;
} 
