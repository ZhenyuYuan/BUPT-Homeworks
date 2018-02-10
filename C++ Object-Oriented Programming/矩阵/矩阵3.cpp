#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int i, j;

//构造矩阵类 
class Matrix
{
public:
    int **m_iPtr;
    Matrix();
	Matrix(int line, int row);
	Matrix(Matrix & A);
	~Matrix();
	void initMatrix();
	void getMatrix(Matrix & A);
	void sumMatrix(Matrix & A1, Matrix & A2, Matrix & B);
	void subMatrix(Matrix & A1, Matrix & A2, Matrix & B);
private:
	int m_iLine, m_iRow;	
}; 

Matrix::Matrix()                     								//默认构造函数，不带参数，动态申请矩阵 
{
	cout << "Please input lines and rows:";
	cin >> m_iLine >> m_iRow;
	m_iPtr = new int *[m_iLine];
	if(NULL != m_iPtr)
	{
		for(i = 0; i <= m_iLine - 1; i++)
	   		m_iPtr[i] = new int[m_iRow];
	}
}

Matrix::Matrix(int line, int row)   								//构造函数，参数是矩阵的行和列 
{
	m_iLine = line;
	m_iRow  = row;
	m_iPtr = new int *[m_iLine];
	if(NULL != m_iPtr)
	{
		for(i = 0; i <= m_iLine - 1; i++)
	   		m_iPtr[i] = new int[m_iRow];
	}
}

Matrix::Matrix(Matrix &A)          									//拷贝构造函数，申请和复制矩阵 
{
	m_iPtr = new int *[A.m_iLine];
	for(i = 0; i <= A.m_iLine-1; i++)
	   m_iPtr[i] = new int[A.m_iRow];
	m_iLine = A.m_iLine;
	m_iRow  = A.m_iRow;
}

Matrix::~Matrix()                  									//析构函数 ，释放内存 
{
	for(i = 0; i <= m_iLine-1; i++)
	    	delete []m_iPtr[i];
	delete []m_iPtr;
	//m_iPtr = NULL;
}

void Matrix::initMatrix()											//初始化数组，读入矩阵元素 
{
	cout << "Please input a " << m_iLine << "*" << m_iRow << " matrix:" << endl;
	for(i = 0; i <= m_iLine-1; i ++)
		for(j = 0; j <= m_iRow-1; j++)		
			cin >> m_iPtr[i][j];
}

void Matrix::getMatrix(Matrix &A)									//输出矩阵元素 
{
	for(i = 0; i <= m_iLine-1; i ++)
	{
		for(j = 0; j <= m_iRow-1; j++)		
			cout << setw(6) << m_iPtr[i][j];
		cout << endl;	
	}	
}

void Matrix::sumMatrix(Matrix &A1, Matrix &A2, Matrix &B)			//计算两矩阵之和 
{
	for(i = 0; i <= m_iLine-1; i ++)
		for(j = 0; j <= m_iRow-1; j++)		
			B.m_iPtr[i][j] = A1.m_iPtr[i][j] + A2.m_iPtr[i][j];
	
	cout << "The sum of tow matrixes is:" << endl; 					//输出新矩阵 
	getMatrix( B );
}

void Matrix::subMatrix(Matrix &A1, Matrix &A2, Matrix &B)			//计算两矩阵之差 
{
	for(i = 0; i <= m_iLine-1; i ++)
		for(j = 0; j <= m_iRow-1; j++)		
		    B.m_iPtr[i][j] = A1.m_iPtr[i][j] - A2.m_iPtr[i][j];
	
	cout << "The subtraction of tow matrixes is:" << endl;
    getMatrix( B );													//输出新矩阵 
}

int main()
{
	int m, n;
	
	Matrix A1;                                                      //调用默认构造函数 
	Matrix A2(A1);                                                  //调用拷贝函数 
	Matrix A3(A1);                                                  //调用拷贝函数 
	  
	A1.initMatrix();                                                //初始化矩阵A1 
	A2.initMatrix();                                                //初始化矩阵A2 
	
	A3.sumMatrix(A1, A2, A3);                                       //计算矩阵A1，A2之和 
	A3.subMatrix(A1, A2, A3);                                       //计算矩阵A1，A2之差 
	
	//A1.~Matrix();
	//A2.~Matrix();
	//A3.~Matrix();
	
	system("pause");
	return 0;
}
