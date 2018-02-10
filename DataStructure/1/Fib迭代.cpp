#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
	int Fib[100]={0,1},c,n;                           //n代表斐波那契数列的项数
	
	cout << "请输入整数:";
	cin >> n;
	  
    if(n>=2)
    {
    	for(int i=2; i<=n; i++)
		{		
			Fib[i] = Fib[i-1] + Fib[i-2];
	 	}
    }
	
	cout << "n=" << n << "时，函数值为" << Fib[n] << endl;
	
	system("pause");
	return 0;
}
