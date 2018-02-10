//统计数字问题
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void Sum(unsigned long long n, unsigned long long result[])
{
	unsigned long long factor = 1;	
	unsigned long long lowernum = 0;
	unsigned long long currnum = 0;
	unsigned long long highernum = 0;
	unsigned long long zero = 0;	//统计多余计算0的个数
	unsigned long long len = 0; 
	while(n / factor != 0)
	{
		lowernum = n - (n / factor) * factor;
		currnum = (n / factor) % 10;
		highernum = n / (factor * 10);
		for(int i = 0; i <= 9; i++)
		{
			if(currnum < i)
		    	result[i] += highernum * factor;
		    else if(currnum == i)
		    	result[i] += highernum * factor + lowernum + 1;
		    else result[i] += (highernum + 1) * factor;
		}
		factor *= 10;
		len ++;
	}
	// cout << len << endl;
	for(int i = 0; i < len; i++)
	{
		zero += (len-i-1)*9*pow(10,i)*1.0;
		cout << zero << endl;
	}
	//cout << endl;
	zero += len;
	//cout << zero << endl;
	//cout << endl;
	cout << result[0] << endl;
	result[0] -= zero;
	//cout << result[0] << endl;
	//cout << endl;
} 

int main() 
{
	unsigned long long page;
	cout << "Please input pages:" << endl;
	cin  >> page;
	
	unsigned long long result[10] = {0};
	
	Sum(page, result);
	
	for(int i = 0; i <= 9; i++)
	{
		cout << "数字" << i << "出现的次数为:  " << result[i] << endl;
	}
	
	system("pause");
	return 0;
}
