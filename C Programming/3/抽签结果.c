#include<stdio.h>
#include<stdlib.h>
int main()
{
 
  char a,b,c,d;	
  int n=0;
  printf("The result of ballot is:\n");
  for(a='W';a<='Z';a++)
  {
  	if(a!='X')
  	 { 	 	
  	 	for(b='W';b<='Z';b++)
  	 	{ 
  	 	   if(b!=a)
  	 	   {
  	 	      for(c='W';c<='Z';c++)
  	 	       {
  	 	   	     if(c!='X'&&c!='Z'&&c!=a&&c!=b)
  	 	   	       {
  	 	   	  	     for(d='W';d<='Z';d++)
  	 	   	  	       {
  	 	   	  	       if(d!='W'&&d!=a&&d!=b&&d!=c)
  	 	   	  	         {
  	 	   	  	           n++;
				           printf("Group %d\nA VS %c\nB VS %c\nC VS %c\nD VS %c\n\n\n",n,a,b,c,d);	
  	 	   	  	         }
  	 	   	  	       }
  	 	   	       }
  	 	       }
  	 	   }
  	    }
  	 }	   
  }
  printf("There are %d ways to assign the players\n",n);
system("pause");
return 0;

}
