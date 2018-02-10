/*万年历*/
#include<stdio.h>
int isLeap(int year)/*函数isLeap的定义(判断year年是否为闰年)*/
{
  if(year%400==0) return 1;
  if(year%100==0) return 0;
  if(year%4==0)   return 1;
  return 0;   
}

int GetMonthDays(int year,int month)/*函数GetMonthDays的定义（返回year年month月的天数）*/
{  
 switch (month)
 { 
   case 1:case 3:case 5:case 7:case 8:case 10:case 12:
 	return 31;
 	break;
   case 2:
	return 28+isLeap(year);
	break;
   default:
	return 30;
	break;
 } 
}

int GetWeekDay(int year,int month,int day)/*函数GetWeekDay的定义（返回year年month月day日是星期几）*/
{ 
  int days,i;/*days为公元0001年1月1日到第year-1年12月31日的总天数*/
  days=(year-1)*365+(year-1)/400+(year-1)/4-(year-1)/100;
  for(i=1;i<=(month-1);i++)
    day=day+GetMonthDays(year,i);
  return (days+day)%7;
}

void PrintMonthCalender(int startDay,int days)/*函数PrintMonthCalender的定义（按要求形式输出某月的日历）*//* startday表示该月1日是星期几,days表示该月共有几天*/
{
  int i;
  printf("Sun.\tMon.\tTue.\tWed.\tThu.\tFri.\tSat.\n");
  for(i=1;i<=startDay;i++)
	printf("\t");
  for(i=1;i<=days;i++)
   {
     printf("%d\t",i);
     if((i-(7-startDay))%7==0)
        printf("\n");
   }
}

int main()
{
  
  int year,month;
  printf("Please input year and month:");
  scanf("%d%d",&year,&month);
  printf("\t\t\t%d-%d\n",year,month);
  PrintMonthCalender(GetWeekDay(year,month,1),GetMonthDays(year,month));         
  return 0;
  
}
