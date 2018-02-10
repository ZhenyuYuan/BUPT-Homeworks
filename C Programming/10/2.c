/*将字符串中用空格分隔的单词输出来*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	char s0[10000],*str=NULL,*s[10000]={NULL};
	int i,j=0;
	printf("Please input a string:");/*输入字符串*/
	gets(s0);/*将读入的字符串存入数组s0中*/
    str=s0;/*指针str指向数组s0*/ 
    s[j]=str;
		
	while(*(str+1)!='\0')
	{	
	  str++; 
	  if(*str==' ')
	   {
	     *str='\0';/*将每个单词后的空格改为"\0"*/
	     j++;
	     s[j]=str+1;	     
	   }		  	  
	}
	
	printf("The result is:\n");/*使用指针数组将每个单词输出*/
	for(i=0;i<=j;i++)
	   printf("%s\n",s[i]);
	
	system("pause");
	return 0;
}
