#include<stdio.h>
main()
{
	
	int letter=0,space=0,number=0,other=0;
	char ch;
	printf("Please input a string:\n");
	scanf("%c",&ch);
	while(ch!='\n')
	{
		
	if( (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z') )
	    letter++;
	else
	     if(ch==' ')
	     space++;
	     else	
			  if(ch>='0'&&ch<='9')
	          number++;
	          else
	          other++;
	ch=getchar();
	
	}
	printf("The number of English characters,space,numbers,other characters are:%d %d %d %d",letter,space,number,other);
	system("pause");
	return 0;

} 
