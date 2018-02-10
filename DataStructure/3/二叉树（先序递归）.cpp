#include<iostream>
#include<cstdlib>
using namespace std;

#define OK    1
#define ERROR 0

typedef struct BiTNode{				      	//二叉树结构定义		
	char data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

int CreateBiTree(BiTree &T)               	//用先序递归方式建立二叉树 
{
	char ch;									
  	cin >> ch;								//读入结点元素 
	if('*' == ch)  
	    T = NULL;
	else
	{
		if(!(T = new BiTNode))				//创建新结点 
	    	return ERROR;
		T->data = ch;                       //生成根节点 
		CreateBiTree(T->lchild);            //构造左子树 
		CreateBiTree(T->rchild);		    //构造右子树 
	}
	return OK;
}
int LeafNum(BiTree T)
{
	if(NULL == T)                           //如果为空树，返回0 
	    return 0;
	else
	{
		if(!(T->lchild)&&!(T->rchild))      //如果既不存在左孩子又不存在右孩子，则该结点为叶子结点，返回1 
			return 1;
		else
		    return LeafNum(T->lchild)+LeafNum(T->rchild);   //递归调用左子树和右子树 
	}
}
void PrintTree(BiTree T, int t) 
{
	if(T)
	{
		for(int i=0; i<t; i++)
		    cout << " ";
		cout << T->data << endl;            //输出结点元素 
		PrintTree(T->lchild, t+2);          //递归调用左子树 
		PrintTree(T->rchild, t+2);          //递归调用右子树 
	}
}

int main()
{
	BiTree T;
	
	cout << "Please input a Binary Tree by PreOrder:" << endl;
	CreateBiTree(T);                                          //建立二叉树 
	
	cout << "-------------------------" << endl;
	cout << "The number of Leaf is: " << LeafNum(T) << endl;  //输出该二叉树的叶子数目 
	cout << "The Binary Tree is:" << endl;                    //以凹入表方式输出二叉树 
	PrintTree(T, 0);
	cout << "-------------------------" << endl; 
	
	system("pause");
	return 0;
} 
