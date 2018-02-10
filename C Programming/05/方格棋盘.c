#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    
    int n,m,i,j,x,y;
    long int square=0,rectangle=0;
    printf("Please input two integers:");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    { 
      for(j=1;j<=m;j++)
      {
        for(x=0;x<i;x++)
         {
           for(y=0;y<j;y++)
           {
             if((i-x)==(j-y))
              square++;
             else
              rectangle++;
           }
         }
      }               
    }
    printf("The number of square is %d ,The number of rectangle is %d.",square,rectangle);
    system("pause");
    return 0;
 
}
