/*从字符串中删除指定字符*/
#include<stdio.h>
void delcharfun(char str[],char ch)/*函数delcharfun()的定义*/
{
  int i;
  for(i=0;str[i]!='\0';i++)
  {
    while(str[i]==ch)  i++;         
    printf("%c",str[i]);                 
  }  
}
int main()
{
    char str[100],ch,i;
    printf("Please input the string:");/*输入字符串*/  
    gets(str);
    printf("Please input the letter you want to delete:");/*输入想要删除的字符*/
    scanf("%c",&ch);
    printf("The result is:");
    delcharfun(str,ch);
    system("pause");
    return 0;
}
