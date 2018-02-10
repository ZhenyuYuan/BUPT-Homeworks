#include <iostream>
#include <cstdlib>
#include <fstream> 
using namespace std;

const int N = 4;
//#define Layer N

int DPMaxValue(int pyramid[][N])           		//动态规划 
{		
	for(int i = N-1; i > 0; i--)
		for(int j = 0; j < i; j++)
			pyramid[i-1][j] += pyramid[i][j] > pyramid[i][j+1] ? pyramid[i][j] : pyramid[i][j+1];

	return pyramid[0][0];
}

int main()
{   
	fstream input;
	
	input.open("金字塔.txt");
	if(input.fail())	exit(0);
	
	cout << "钻石金字塔的层数N:" << N << endl;

	int pyramid[N][N];
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			input >> pyramid[i][j];
	
	cout << "钻石金字塔:" << endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
			cout << pyramid[i][j] << " ";
		cout << endl;
	}
	
	cout << "DP最优路径上钻石总价值为:" << DPMaxValue(pyramid) << endl;
	
	input.close();
	
	system("pause");
	return 0;
} 
