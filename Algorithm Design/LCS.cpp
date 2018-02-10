//最长公共子序列 
#include <iostream>
#include <cstdlib>
using namespace std;

void LCSLength(int m, int n, char *x, char *y, int **c, int **b)
{
	int i, j;
	for(i = 1; i <= m; i++)           //不要在函数中初始化 
		c[i][0] = 0;
	for(i = 1; i <= n; i++)
		c[0][i] = 0;
}
