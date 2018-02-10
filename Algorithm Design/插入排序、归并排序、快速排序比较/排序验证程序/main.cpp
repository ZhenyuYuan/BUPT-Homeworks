#include <iostream>
#include <cstdlib>
#include "Sort.h"
#include <fstream>
using namespace std;

int main() 
{	
	ifstream test;
	test.open("排序测试数据.txt",ifstream::in);
	int n;
	test>>n;
	int *a=new int[n];
	for (int i=0;i<7;++i)
	{
		for (int j=0;j<n;++j)
			test>>a[j];
		cout<<"第"<<i+1<<"组数据测试结果:"<<endl;
		Sort (a, n);
		cout<<endl<<endl<<endl;
		system ("pause"); 
	}
	system("pause");
	return 0;
}

