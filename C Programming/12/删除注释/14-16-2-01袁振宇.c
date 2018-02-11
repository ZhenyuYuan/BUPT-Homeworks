/*删除注释*/
#include<stdio.h>
#include<stdlib.h>
void DeleteNote(FILE *,FILE *);/*删除注释函数原型*/
main()
{
	char ch;
	FILE *sfPtr = NULL , *dfPtr = NULL;/*定义两个文件指针*/

	printf("Delete Note\n");
	
	if(( sfPtr = fopen( "source.c" , "r" )) == NULL )/*以只读方式打开源文件source.c*/
	  printf("can't open the source file\n");
    else{
	    if(( dfPtr = fopen( "desk.c" , "w" )) == NULL)/*以只写方式打开文件desk.c*/
	        printf("can't open the desk file\n");
	    else
	    	DeleteNote( sfPtr , dfPtr );/*调用子函数*/ 
	}	
	fclose(sfPtr);/*关闭文件*/
	fclose(dfPtr);
	
	system("pause");
	return 0;
}
void DeleteNote( FILE *sfPtr , FILE *dfPtr )/*删除注释函数定义*/
{
    int i=0;
	char ch;
    ch = fgetc(sfPtr);
	while( !feof (sfPtr) ){	
		switch(i){
			case 0:
			  if( ch == '/' )  i=2;
			  else {
			    if( ch == '"' )  i=1;
			  	fputc(ch,dfPtr);
			  }	
			  ch = fgetc(sfPtr);
			  break;
			case 1:
			  while( ch != '"' ){
			    fputc(ch,dfPtr);
			    ch = fgetc(sfPtr);
		      }  
			  fputc(ch,dfPtr);
		      i=0;
		      ch = fgetc(sfPtr);
		      break;
		    case 2:
		      if( ch == '/'){
			    while( ch != '\n' )
				  ch = fgetc(sfPtr);
				i=0;
			  }	  
			  else 
			   if( ch == '*' ){
			  	 i=3;
			     ch = fgetc(sfPtr);
			   }
			   else{
			     fputc(ch,dfPtr);
			     i=0;
			     ch = fgetc(sfPtr);
			   }
			  break;
			case 3:
			  while( ch != '*' )
			    ch = fgetc(sfPtr);			  
			  if(( ch = fgetc(sfPtr)) == '/')  i=0;
			  else i=3;
			  break;			  			  
		}
	    
	}
}
