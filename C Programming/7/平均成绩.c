/*Æ½¾ù³É¼¨*/
#include<stdio.h>
int main()
{
	int a[100],i,courses,score;
	float average,total=0;
	printf("Please input the number of the courses:");
	scanf("%d",&courses);
	printf("Please input %d scores:",);
	for(i=0;i<=courses-1;i++)
	{
	  scanf("%d",&score);
	  a[i]=score;
	  total+=a[i];
	}
	average=total/courses;
	printf("The average score is:%.2f",average);
	return 0;
} 

