/*筛选1到999之间的所有素数*/
#include<stdio.h>
int main()
{
    int a[999]={0},i,p,x=0;/*将数组a[]中所有元素初始化为零*/
    printf("The prime numbers between 1 and 999 are:\n");    
    for(p=2;p*p<=998;p++)
    {
      for(i=2;i<=998;i++)
      {
        if(i>p&&i%p==0&&a[i]==0)          
          a[i]=1;                      
      }
    }
    for(i=2;i<=998;i++)
    {  
      if(a[i]==0)
      {  
        printf("%d\t",i);/*输出满足条件的素数*/ 
        x++;
        if(x%5==0)
          printf("\n");   
      }     
    }      
    system("pause");
    return 0;    
} 
