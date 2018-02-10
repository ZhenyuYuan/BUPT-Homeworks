//最大字段和
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	cout << "请输入数组元素个数:" << endl;
	cin  >> n;
	int a[n];
	cout << "请输入数组元素:" << endl;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int b = 0, sum = 0;
	
	for(int j = 1; j < n; j++)
	{
		if(b > 0)
			b += a[j]; 
		else
		    b = a[j];
		if(b > sum)
			sum = b;
	}
	
	cout << "最大字段和是:" << sum << endl;
	
	system("pause");
	return 0;
} 
