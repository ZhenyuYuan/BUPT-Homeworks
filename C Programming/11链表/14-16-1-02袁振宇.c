#include<stdio.h>
#include<stdlib.h>
struct listNode{
	int data;
	struct listNode *nextptr;
};
typedef struct listNode LISTNODE;
typedef LISTNODE *LISTNODEPTR;
LISTNODEPTR CreatList()/*创建新链表并将一组数存入链表*/
{
	int num;
	LISTNODEPTR listptr=NULL,lastptr=NULL,currentptr=NULL;
	listptr=malloc(sizeof(LISTNODE));/*分配结点内存*/
	if(listptr!=NULL)/*创建头结点*/
	{
		listptr->nextptr=NULL;
		lastptr=listptr;
	}
	scanf("%d",&num);/*读入第一个整数*/
	while(num!=-1)
	{
		currentptr=malloc(sizeof(LISTNODE));/*分配结点内存*/
		if(currentptr!=NULL)
		{
			currentptr->data=num;
			currentptr->nextptr=NULL;
			lastptr->nextptr=currentptr;/*将前结点连上新结点*/
			lastptr=currentptr;/*修正lastPtr预备下次循环*/
		}
		scanf("%d",&num);
	}
	return listptr;/*返回头结点*/
}

int Judge(LISTNODEPTR head1,LISTNODEPTR head2)/*判断函数*/
{
    LISTNODEPTR ptr1,ptr2,startptr;
    startptr=head1;/*startptr记住每趟比较中链表head1的开始结点*/ 
    ptr1=head1;/*ptr1是链表head1的工作指针*/
    ptr2=head2;/*ptr2是链表head2的工作指针*/
    while(ptr1!=NULL&&ptr2!=NULL)
    {
    	if(ptr1->data==ptr2->data)/*结点值相同*/
    	{
    		ptr1=ptr1->nextptr;
    	    ptr2=ptr2->nextptr;
		}
		else
		{
			startptr=startptr->nextptr;/*链表head1的开始结点指向下一结点*/
			ptr1=startptr;/*ptr1指向下一开始结点startptr*/
			ptr2=head2;/*ptr2指向head2的头结点*/
		} 
    }
    if(ptr2==NULL)/*如果链表head2判断结束*/ 
       return 1;
    else
       return 0;
}

main()
{
	LISTNODEPTR head1,head2,ptr1,ptr2;

	printf("Please input list A(end by -1):");
	head1=CreatList();
	printf("Please input list B(end by -1):");
	head2=CreatList();
    
	if(Judge(head1->nextptr,head2->nextptr)==1)
	   printf("ListB is the sub sequence of A\n");
    else
	   printf("ListB is not the sub sequence of A\n");
	
	system("pause");
	return 0;	
} 
