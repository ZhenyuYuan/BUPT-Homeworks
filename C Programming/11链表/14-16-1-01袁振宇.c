/*链表的建立、查找、遍历、释放、结点的删除*/ 
#include<stdio.h>
#include<stdlib.h>
struct listNode{
	int data;
	struct listNode *nextPtr;
};
typedef struct listNode LISTNODE;
typedef LISTNODE *LISTNODEPTR;
LISTNODEPTR creatFIFOList();
void printList(LISTNODEPTR);
void deleteNode(LISTNODEPTR);
main()
{    
    LISTNODEPTR headPtr;   
	
	printf("Please input a series of integers:");/*输入一串整数,以-1结束*/
    headPtr=creatFIFOList();	
    
	printf("The list is:");
	printList(headPtr);
   
    deleteNode(headPtr);/*删除指定元素*/
   
    system("pause");
    return 0;	
}

LISTNODEPTR creatFIFOList()/*创建新链表并将一组数存入链表*/ 
{
	int num;
	LISTNODEPTR listPtr=NULL,lastPtr=NULL,currentPtr=NULL;
	listPtr=malloc(sizeof(LISTNODE));/*分配结点内存*/
	if(listPtr!=NULL)/*创建头结点*/
	{
	  listPtr->nextPtr=NULL;
	  lastPtr=listPtr;
    }	  
	scanf("%d",&num);/*读入第一个整数*/
	while(num!=-1)
	{
	   currentPtr=malloc(sizeof(LISTNODE));/*分配结点内存*/ 
	   if(currentPtr!=NULL)
	   {
	  		currentPtr->data=num;
	  		currentPtr->nextPtr=NULL;
	  		lastPtr->nextPtr=currentPtr;/*将前结点连上新结点*/
	  		lastPtr=currentPtr;/*修正lastPtr预备下次循环*/
	   }
	   scanf("%d",&num);
	}
	return listPtr;/*返回头结点*/	 
}

void printList(LISTNODEPTR currentPtr)/*带头结点的链表的遍历*/ 
{
	 currentPtr=currentPtr->nextPtr;/*跳过头结点*/
 	 
 	 while(currentPtr!=NULL)
 	 {
		printf("%d ",currentPtr->data);
		currentPtr=currentPtr->nextPtr;
	 }	
 	 printf("\n");
}

void deleteNode(LISTNODEPTR sPtr)/*删除指定元素*/ 
{
     int value;
     LISTNODEPTR currentPtr,previousPtr;
     previousPtr=NULL;
         
     printf("Please input an integer you want to delete:");
     scanf("%d",&value); 
     
	 while(sPtr->data==value)
     {
        	currentPtr=sPtr;
        	sPtr=sPtr->nextPtr;
        	free(currentPtr);
     }
	 for(currentPtr=sPtr;currentPtr!=NULL;previousPtr=currentPtr,currentPtr=currentPtr->nextPtr)
     {
	    if(currentPtr->data==value)
        {  
	    	 previousPtr->nextPtr=currentPtr->nextPtr;    	     
			 free(currentPtr);
			 currentPtr=previousPtr;
        }
     }
     if(sPtr->nextPtr!=NULL)
     {
    	printf("The new list is:"); 
		printList(sPtr);		
     } 
     else
        printf("There is no item in the list");
}
