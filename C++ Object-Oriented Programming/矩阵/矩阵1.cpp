#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

void initMatrix(int a[][5]);
void getMatrix(int a[][5]);
void sumMatrix(int a1[][5], int a2[][5], int b[][5]);
void subMatrix(int a1[][5], int a2[][5], int b[][5]);

int main()
{
	int A1[4][5], A2[4][5];
	int A3[4][5];
	
	initMatrix( A1 );
	initMatrix( A2);
	sumMatrix(A1, A2, A3);
	subMatrix(A1, A2, A3);
	
    system("pause");
    return 0; 
}

void initMatrix(int a[][5])
{
	cout << "Please input a 4*5 matrix:" << endl;
	for(int i = 0; i <= 3; i ++)
		for(int j = 0; j <= 4; j++)		
			cin >> a[i][j];
}

void getMatrix(int a[][5])
{
	for(int i = 0; i <= 3; i ++)
	{
		for(int j = 0; j <= 4; j++)		
			cout << setw(6) << a[i][j];
		cout << endl;	
	}	
}

void sumMatrix(int a1[][5], int a2[][5], int b[][5])
{
	for(int i = 0; i <= 3; i ++)
		for(int j = 0; j <= 4; j++)		
			b[i][j] = a1[i][j] + a2[i][j];
	
	cout << "The sum of tow matrixes is:" << endl; 
	getMatrix( b );
}

void subMatrix(int a1[][5], int a2[][5], int b[][5])
{
	for(int i = 0; i <= 3; i ++)
		for(int j = 0; j <= 4; j++)		
			b[i][j] = a1[i][j] - a2[i][j];
	
	cout << "The subtraction of tow matrixes is:" << endl;
    getMatrix( b );
}
