#include<iostream>
#include<stdlib.h>
using namespace std;

#define MAXSIZE 12500

typedef struct{                 //定义三元组表 
	int i, j;
	int e;
}Triple;
typedef struct{
	Triple data[MAXSIZE+1];
	int mu, nu, tu;
}TSMatrix;

void AddMatrix(TSMatrix A, TSMatrix B, TSMatrix &C)
{
	int row, col;
	int TuA = 1, TuB = 1;
	int Ctu = 0;
	int element;
	
	for(row=1; row<=A.mu; row++)
	{
		for(col=1; col<=A.nu; col++)
		{
			if(A.data[TuA].i == row && A.data[TuA].j == col)
			{
			    if(B.data[TuB].i == row && B.data[TuB].j == col)
			    {
			    	element = A.data[TuA].e + B.data[TuB].e;
			    	TuA++;               //A,B移向下一个元素 
			    	TuB++;
			    }	
			    else
			    {
			    	element = A.data[TuA].e;
			    	TuA++;               //A移向下一个元素 
			    }
			}
			else if(B.data[TuB].i == row && B.data[TuB].j == col)
			{
			    element = B.data[TuB].e;
			    TuB++;                   //B移向下一个元素 
		    }
			else
			    element = 0;
			
			if(element != 0)             //将结果赋值给C 
			{
				Ctu++;
				C.data[Ctu].i = row;
				C.data[Ctu].j = col;
				C.data[Ctu].e = element;
			}
		}
		
		C.mu = A.mu;
		C.nu = A.nu;
	    C.tu = Ctu;
	}
}

int main(){
	int row, col, Tu = 0;
	int element;
	TSMatrix A, B, C;
	cout << "Please input the row and col of matirx A:" << endl;
	cin  >> row >> col;
	A.mu = row;
	A.nu = col;
	cout << "Please input the row and col of matrix B:" << endl;
	cin  >> row >> col; 
	B.mu = row;
	B.nu = col;
	
	if(A.mu != B.mu || A.nu != B.nu)                 //判断两矩阵能否相加 
	    cout << "Error! Can't add!" << endl;
	else{
		cout << "Please input the matrix A:" << endl;
		for(int i=1; i<=A.mu; i++)
		{
			for(int j=1; j<=A.nu; j++)
			{
				cin >> element;
				if(element != 0 && Tu <= MAXSIZE)
				{
					Tu++;
					A.data[Tu].i = i;
					A.data[Tu].j = j;
					A.data[Tu].e = element;
				}
			}
		}
		A.tu = Tu;
		Tu = 0;
		
		cout << "Please input the matrix B:" << endl;
		for(int i=1; i<=B.mu; i++)
		{
			for(int j=1; j<=B.nu; j++)
			{
				cin >> element;
				if(element != 0 && Tu <= MAXSIZE)
				{
					Tu++;
					B.data[Tu].i = i;
					B.data[Tu].j = j;
					B.data[Tu].e = element;
				}
			}
		}
		B.tu = Tu;
	
		AddMatrix(A, B, C);
	}
	
	
	cout << "----------------------" << endl;
	cout << "\tA.data" << endl;                      //输出A的三元组表 
    cout << "i\tj\te" << endl;
    for(Tu=1; Tu <= A.tu; Tu ++)
    	cout << A.data[Tu].i << "\t" << A.data[Tu].j << "\t" << A.data[Tu].e << endl;
	cout << "----------------------" << endl;        
	cout << "\tB.data" << endl;                      //输出B的三元组表 
    cout << "i\tj\te" << endl;
    for(Tu=1; Tu <= B.tu; Tu ++)
    	cout << B.data[Tu].i << "\t" << B.data[Tu].j << "\t" << B.data[Tu].e << endl;
    cout << "----------------------" << endl;
	cout << "\tC.data" << endl;                      //输出C的三元组表 
    cout << "i\tj\te" << endl;
    for(Tu=1; Tu <= C.tu; Tu ++)
    	cout << C.data[Tu].i << "\t" << C.data[Tu].j << "\t" << C.data[Tu].e << endl;
    
    cout << "\nMatrix C" << endl;                    //输出矩阵C 
    Tu = 1;
	for(row=1; row<=C.mu; row++)
    {
    	for(col=1; col<=C.nu; col++)
    	{
    		if(row==C.data[Tu].i && col==C.data[Tu].j)
    		{
    			cout << C.data[Tu].e << " ";
    			Tu++;
    		}	
    		else
    		    cout << "0 ";
    	}
    	cout << endl;
    }
    
	system("pause");
	return 0;
}
