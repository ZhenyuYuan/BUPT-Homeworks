#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{
	ifstream input;
	input.open("text2.1.txt");
	ofstream output;
	output.open("text2.2.txt");
    if(input.fail()||output.fail()) 								//判断文件是否打开成功
	{
		cout << "File does not exit." << endl;
		cout << "Exit programe." << endl;
		return 0;
	}
	
	string str;
	int i = 1;
	while(getline(input, str))
	{
		output << setw(4) << i << "  " << str << endl;
		i ++;
	}
	
    input.close();
    output.close();
	
	system("pause");
	return 0;
}
