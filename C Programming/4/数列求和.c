#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int i,n,c;
    double a=1,b=2,s=0;
    printf("Please input an integer:",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
       s=s+b/a;
       c=a+b;
       a=b;
       b=c;              
     }
    printf("The result is:%.2lf",s);
    system("pause");
    return 0;
    
}
