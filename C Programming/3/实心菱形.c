#include<stdio.h>
int main()
{
 
  int n,line,a;
  printf("Please input an integer:",n);
  scanf("%d",&n);
   for(line=1;line<=n;line++)
   {
   	 for(a=1;a<=n+line-1;a++)
	 {
	 	if(a>n-line)
	 	  printf(" * ");
	 	else
	 	  printf(" ");
	 }
	 printf("\n");
   }
   for(line=1;line<n;line++)
   {
   	 for(a=1;a<=2*n-1-line;a++)
	 {
		if(a>line)
		  printf(" * ");
		else
		  printf(" ");	
   	 }
   	 printf("\n");
   }
   
 	system("pause");
 	return 0;
	
}
