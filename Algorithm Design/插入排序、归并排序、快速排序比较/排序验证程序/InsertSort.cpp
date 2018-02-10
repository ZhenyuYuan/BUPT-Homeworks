// InsertSort
#include <iostream>
#include "Sort.h"
using namespace std;

void InsertSort(int a[], int n, long long &MoveNum, long long &CompNum)
{
	int x;
	int i, j;				 
	for(i = 1; i < n; i++)
	{
		x = a[i];
		for(j = i-1; j >= 0; j--)
		{
			++CompNum;
			if(x < a[j])
			{	
				a[j+1] = a[j];
				++MoveNum;
			}	
			else			
				break;
		}
		a[j+1] = x;
		if(j+1 != i)	
			++MoveNum;
	}
} 
