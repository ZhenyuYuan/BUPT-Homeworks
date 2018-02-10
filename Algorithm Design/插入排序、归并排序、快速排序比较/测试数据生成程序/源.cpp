#include <iostream>
#include <fstream>
#include "build.h"
using namespace std;

int main ()
{
	ofstream test;
	test.open("排序测试数据.txt",fstream::out);
	int n;
	cout<<"请输入要测试的数据量：";
	cin>>n;
	test<<n<<endl;
	Build_Best_Insert (test, n);
	cout<<"插入排序最好情况生成完毕"<<endl;
	Build_Worst_Insert ( test, n);
	cout<<"插入排序最坏情况生成完毕"<<endl;
	Build_Best_Quick ( test, n);
	cout<<"快速排序最好情况生成完毕"<<endl;
	Build_Worst_Quick ( test, n);
	cout<<"快速排序最坏情况生成完毕"<<endl;
	Build_Best_Merge ( test, n);
	cout<<"归并排序最好情况生成完毕"<<endl;
	Build_Worst_Merge ( test, n);
	cout<<"归并排序最坏情况生成完毕"<<endl;
	Build_Chaotic (test, n);
	cout<<"乱序数组情况生成完毕"<<endl;
	system("pause");
	return 0;
}	