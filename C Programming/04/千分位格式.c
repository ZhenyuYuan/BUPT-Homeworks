#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    long long int n;
    int a[100],i,count,r;
    printf("Please input an integer:");
    scanf("%lld",&n);
    printf("The result is:");
    for(i=0;n!=0;i++)
    {
       a[i]=n%10;
       n=n/10;
    }
    r=i%3;
    i=i-1;
    if(r!=0)
      {
	   for(;r!=0;r--,i--)
          {
            printf("%d",a[i]);
          } 
       printf(",");
	  }
    for(count=1;i>=0;i--,count++)
        {
            printf("%d",a[i]);
            if(count%3==0)
                {
                    if(i!=0)
                    printf(",");
                }
        }   
    return 0;
    
}
