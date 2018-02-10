#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

void initMatrix(int *[]);
void getMatrix(int *[]);
void sumMatrix(int *[], int *[], int *[]);
void subMatrix(int *[], int *[], int *[]);

//定义全局变量i、j作为矩阵的下标 
int  i, j; 

int main()
{
	/*----------------------用new动态申请三块内存 ---------------------*/
	
	int **Ap1 = new int*[4];
	if(Ap1 == NULL)
	    return 0;
	for(i = 0; i <= 3; i ++)
	{
		Ap1[i] = new int[5];
		if(Ap1[i] == NULL)
		    return 0;
	}	
		
	int **Ap2 = new int*[4];
	if(Ap2 == NULL)
	    return 0;
	for(i = 0; i <= 3; i ++)
	{
		Ap2[i] = new int[5];
		if(Ap2[i] == NULL)
		    return 0;
	}	
	
	int **Ap3 = new int*[4];
	if(Ap3 == NULL)
	    return 0;
	for(i = 0; i <= 3; i ++)
	{
		Ap3[i] = new int[5];
		if(Ap3[i] == NULL)
		    return 0;
	}	
	
	/*------------------------------------------------------------------*/	
	
	initMatrix( Ap1 );
	initMatrix( Ap2 );
	sumMatrix(Ap1, Ap2, Ap3);
	subMatrix(Ap1, Ap2, Ap3);	
		
	/*----------------------delete三块动态内存 -------------------------*/
	
	for(i = 0; i <= 3; i ++)
	    delete []Ap1[i];  
	delete []Ap1;
	Ap1 = NULL;
	
	for(i = 0; i <= 3; i ++)
	    delete []Ap2[i];  
	delete []Ap2;
	Ap2 = NULL;
	
	for(i = 0; i <= 3; i ++)
	    delete []Ap3[i];  
	delete []Ap3;
	Ap3 = NULL;
	
	system("pause");
	return 0;
} 

void initMatrix(int *a[])
{
	cout << "Please input a 4*5 matrix:" << endl;
	for(i = 0; i <= 3; i ++)
		for(j = 0; j <= 4; j++)		
			cin >> a[i][j];
}

void getMatrix(int *a[])
{
	for(i = 0; i <= 3; i ++)
	{
		for(j = 0; j <= 4; j++)		
			cout << setw(6) << a[i][j];
		cout << endl;	
	}	
}

void sumMatrix(int *a1[], int *a2[], int *b[])
{
	for(i = 0; i <= 3; i ++)
		for(j = 0; j <= 4; j ++)		
			b[i][j] = a1[i][j] + a2[i][j];
	
	cout << "The sum of tow matrixes is:" << endl; 
	getMatrix( b );
}

void subMatrix(int *a1[], int *a2[], int *b[])
{
	for(i = 0; i <= 3; i ++)
		for(j = 0; j <= 4; j++)		
			b[i][j] = a1[i][j] - a2[i][j];
	
	cout << "The subtraction of tow matrixes is:" << endl;
    getMatrix( b );
}

