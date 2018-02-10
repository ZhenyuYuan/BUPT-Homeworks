#include<iostream>
#include<stdlib.h>
using namespace std;

int Fib(int );

int main()
{
	int n;
	cout << "请输入整数:";
	cin >> n;
	cout << "n=" << n << "时，函数值为" << Fib(n) << endl;
	system("pause");
	return 0;
}

int Fib(int n)
{
	if(n == 0 || n == 1)
	    return n;
	else
	    return Fib(n-1) + Fib(n-2);                    //实现递归 
}
