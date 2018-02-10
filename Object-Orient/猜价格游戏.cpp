/*对于C/C++而言，通常产生的随机数的方法是调用以下两个函数：
srand(time(0));设定随机数种子， 参数内是使用当前时间作为种子
rand();  产生一个随机数
还需包含头文件ctime 和 cstdlib*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int price;                        //"price"是用户猜测的价格 
	
	srand(time(0));
	int PRICE = 1 + rand()%1000;      //"PRICE"是商品实际的价格 
	cout << PRICE << endl;
	
	do
	{
		cout << "Please input the price you guess:";
		cin >> price;
		if(price >1000)
		    cout << "Please input an integer less than 1000!\n" << endl; 	
		else
		{
			if(price < PRICE)
	    		cout << "Too lower! Please try again.\n" << endl;
	    	if(price > PRICE)
	        	cout << "Too higher! Please try again.\n" << endl;
	    	if(price == PRICE)
	        	cout << "Your are right!" << endl;
		}
	}while(price != PRICE);
	
    system("pause");
    return 0;
} 
