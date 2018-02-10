#include<iostream>
#include<stdlib.h>
using namespace std;

#define OK    1
#define ERROR 0
#define TRUE  1
#define FALSE 0
#define OVERFLOW -2

typedef struct QNode{
	int    date;
	struct QNode *next;
}QNode,*QueuePtr;

typedef struct{
	QueuePtr rear;
}LinkQueue;

int InitQueue(LinkQueue &Q)       //初始化队列 
{
	Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if(!Q.rear)
	    return OVERFLOW;
	Q.rear->next = Q.rear;
	return OK;
}
int QueueEmpty(LinkQueue &Q)      //队列判空 
{
	if(Q.rear->next == Q.rear)
	    return OK;
	else
	    return ERROR;
}
int EnQueue(LinkQueue &Q, int e)  //元素入队 
{
	QueuePtr p;
	p = (QueuePtr)malloc(sizeof(QNode));
	p->date = e;
	p->next = Q.rear->next;
	Q.rear->next = p;
	Q.rear = p;
	cout << e << "Add Successful!" << endl;
	return OK;
}
int DeQueue(LinkQueue &Q)         //元素出队 
{
	QueuePtr p;
	if(QueueEmpty(Q))
	{
	    cout << "Error! The queue has been empty!" << endl;
		return ERROR;
	}
	else
	{
		p = Q.rear->next->next;
		if(p == Q.rear)
		{
			Q.rear = Q.rear->next;
			Q.rear->next = p->next;
		}
		else
		    Q.rear->next->next = p->next;
		free(p);
		cout << "Delete successful!" << endl;
		return OK;
	}
}
int main()
{
	LinkQueue Q;
	int e,key=1,QueueLenth=0,n;
	int ope;
	InitQueue(Q);

	while(1 == key)
	{   
	    cout << "--------------------------------" << endl;
		cout << "\tSelect Operation" << endl;
		cout << "--------------------------------" << endl;
		cout << "1:Add  2:Delete  3:State  4:Exit" << endl;       //选择操作 
		cin  >> ope;
		switch(ope)
		{
			case 1:
			    cout << "Please input the amount you want to add:";
				cin  >> n;
			    cout << "Please input " << n << " elements:";
				for(int i=1; i<=n; i++)
				{
					cin >> e;
					EnQueue(Q,e);
					QueueLenth++;
				}
				break;
			case 2:
				DeQueue(Q);
				if(QueueLenth >= 1)
					QueueLenth--;
				break;
			case 4:
				key=0;
				break;
			case 3:
				cout << "The queue has " << QueueLenth << " elements" << endl;
				break;
			default :
				cout << "Error!Please selet an right selection!" << endl;
				break;
		}
	} 
	system("pause");
	return 0;
}
