#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	ofstream output;

	output.open("text1.txt", ios::out);				//打开文件用于输出 
	if(output.fail()) 								//判断文件是否打开成功 
	{
		cout << "File does not exit." << endl;
		cout << "Exit programe." << endl;
		return 0;
	}
	
	/*---------------------------向文件中写入数据---------------------------*/
	int i;
	unsigned int ui;
	long  li;
	float f;
	double d;
	char  c;
	string str;
	
	cout << "Please input an integer:";
	cin  >> i;
	cout << "Please input an unsigned integer:";
	cin  >> ui;
    cout << "Please input a long int:";
	cin  >> li;
	cout << "Please input a float:";
	cin  >> f;
	cout << "Please input a double:";
	cin  >> d;
	cout << "Please input a char:";
	cin  >> c;
	cout << "Please input a string:";
	//cin  >> str;
	getline(cin, str);
	
	output << setw(10) << i;
	output << setw(10) << ui;
	output << setw(10) << li;
	output << setw(10) << setprecision(8) << showpoint << f;      //用showpoint使当小数部分全为0时可输出小数部分而不只是整数部分 
	output << setw(10) << setprecision(8) << showpoint << d;
	output << setw(10) << c;
	output << setw(10) << str;
	
	output << endl; 
	output << "十进制：  i = " << dec << i << endl;
	output << "八进制:   i = " << oct << i << endl;
	output << "十六进制: i = " << hex << i << endl;
	
	output.close();									//关闭文件
	
	system("pause");
	return 0;	
}
