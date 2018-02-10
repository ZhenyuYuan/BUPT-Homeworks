// MergeSort2
#include <iostream>
#include "Sort.h"
using namespace std;

void Merge(int c[], int d[], int l, int m, int r, long long &CompNum, long long &MoveNum)
{
	int i = l, j = m, k = l;
	while( i < m && j < r )
	{
		if(c[i] < c[j])	d[k++] = c[i++];
		else	d[k++] = c[j++];
	}
    CompNum += k;
    
	if(i >= m)
	{
		for(int q = j; q <= r; q++)
			d[k++] = c[q];
	}
	else
		for(int q = i; q < m; q++)
			d[k++] = c[q];
}

void MergePass(int x[], int y[], int s, int n, long long &MoveNum, long long &CompNum)
{
	int i = 0;
	while(i <= n-2*s)
	{	//合并大小为s的相邻2段子数组 
		Merge(x, y, i, i+s, i+2*s, CompNum, MoveNum);
		i += 2*s;
	}
	//剩下的元素个数少于2s 
	if(i+s < n)		Merge(x, y, i, i+s, n, CompNum, MoveNum);
	else
		for(int j = i; j < n; j++)
		{
			y[j] = x[j];
		}	
	
	MoveNum += n;
}

//合并排序算法 
void MergeSort(int a[], int n, long long &CompNum, long long &MoveNum)
{
	int *b = new int[n];
	int s = 1;
	while(s < n)
	{
		MergePass(a, b, s, n, MoveNum, CompNum);		// 合并到数组b 
		s += s;
		MergePass(b, a, s, n, MoveNum, CompNum);		// 合并到数组a 
		s += s;
	}
}
