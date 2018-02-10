#include <iostream>
#include <cstdlib>
using namespace std;

void Merge(int a[], int p, int q, int r)
{
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1+1], R[n2+1];
	for(int i = 0; i <= n1; i++)
		L[i] = a[p+i-1];
	for(int j = 0; j <= n2; j++)
		R[j] = a[q+j]; 
	
}

int main()
{
	
	
	system("pause");
	return 0;
}
