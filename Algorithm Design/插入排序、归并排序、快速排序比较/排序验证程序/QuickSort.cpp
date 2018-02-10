//QuickSort
#include <iostream>
#include "Sort.h"
using namespace std;

void QuickSort( int A[], int l, int r, long long &MoveNum, long long &CompNum)
{
	if( l >= r )return;
	int i = l + 1;
	int j = l + 1;
	int key = A[l];
	for(; j <= r; j++ )
	{
		CompNum++;
		if( A[j] <= key )
		{
			int b = A[j];
			A[j] = A[i];
			A[i] = b;
			i++;
			MoveNum++;
		}	
	}
	i--;
	int a = A[l];
	A[l] = A[i]; 
	A[i] = a;
	MoveNum++;
	a = MoveNum;
	if( l < r )
	{
		QuickSort( A, l, i - 1, MoveNum, CompNum);
		QuickSort( A, i + 1, r, MoveNum, CompNum);
	}
}
