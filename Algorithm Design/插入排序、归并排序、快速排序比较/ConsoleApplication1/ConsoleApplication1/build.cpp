#include <iostream>
#include <fstream>
#include "Build_Quicksort.h"
#include <ctime>
using namespace std;

void Build_Best_Insert (ofstream &test, int n)//插入排序最好情况
{
	for (int j = 0;j < n;++j)
	{
		test<<j+1<<" ";
	}
	test<<endl;
}

void Build_Worst_Insert (ofstream &test, int n)//插入排序最坏情况
{
	for (int j = n-1;j > -1;--j)
	{
		test<<j+1<<" ";
	}
	test<<endl;
}
	
void Build_Best_Quick (ofstream &test, int n)//快速排序最好情况
{
	int *a=new int[n];
	for (int i=0;i<n;++i)
		a[i]=i+1;
	Build_Quicksort(a,0,n-1);
	for (int j = 0;j < n;++j) 
	{
		test<<a[j]<<" ";
	}
	test<<endl;
}

void Build_Worst_Quick (ofstream &test, int n)//快速排序最坏情况
{
	for (int j = n-1; j > -1;--j)
		{
			test<<j+1<<" ";
		}
	test<<endl;
}

void Build_Best_Merge (ofstream &test, int n)//归并排序最好情况
{
	for (int j = 0;j < n;++j)
	{
		test<<j+1<<" ";
	}
	test<<endl;
}

void Build_Worst_Merge (ofstream &test, int n)//归并排序最坏情况
{
	int *a=new int[n];
	for (int i=0;i<n;++i)
		a[i]=1+i;
	int *b=new int[n];
	int k=1,r,l;
	while (k<n)
	{
		int i,j;
		for (r=0,l=k;l < n;r=l+k,l=r+k)
		{
			
			for ( i=r,j=l;i<l && j<n;++i,++j)
				b[i]=a[j];
			for ( j=r;j<l&&i<n;++i,++j)
				b[i]=a[j];
		}
		for (;r<n;++r)
			b[r]=a[r];
		k=k*2;
		for (r=0,l=k;l < n;r=l+k,l=r+k)
		{
			for ( i=r,j=l;i<l&&j<n;++i,++j)
				a[i]=b[j];
			for ( j=r;j<l&&i<n;++i,++j)
				a[i]=b[j];
		}
		for (;r<n;++r)
			a[r]=b[r];
		k=k*2;
	}
	for (int j = 0;j < n;++j) 
	{
		test<<a[j]<<" ";
	}
	test<<endl;
}

void Build_Chaotic (ofstream &test, int n)//生成乱序数组
{
	int *a=new int[n];
	srand(unsigned int(time(0)));
	for (int i=0;i<n;++i)
		a[i]=rand()%n+1;
	for (int j = 0;j < n;++j) 
	{
		test<<a[j]<<" ";
	}
	test<<endl;
}

