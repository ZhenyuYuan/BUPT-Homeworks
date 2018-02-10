#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

clock_t start, stop;     	                //clock_t is a built-in type for processor time(ticks)
double ticks, duration, total_time;    		//record the run time(seconds) of a function
 
int MaxSubsequenceSum1(const int A[], int N)
{
	int ThisSum, MaxSum, i, j, k;
	MaxSum = 0;          			//initialize the maximun sum
	for(i = 0; i < N; i++)
		for(j = i; j < N; j++)
		{
			ThisSum = 0;
			for(k = i; k <= j; k++)
				ThisSum += A[k];
			if(ThisSum > MaxSum)
				MaxSum = ThisSum;
		}
		return MaxSum;
} 

int MaxSubsequenceSum4(const int A[], int N)
{
	int ThisSum, MaxSum, j;
	ThisSum = MaxSum = 0;
	for(j = 0; j < N; j++)
	{
		ThisSum += A[j];
		if(ThisSum > MaxSum)
			MaxSum = ThisSum;
		else if(ThisSum < 0)
			ThisSum = 0;
	}
	return MaxSum;
}

int main()
{
	int N, MaxSum;
	cout << "Please input the scale N of the array:";
	cin  >> N;
    int *a = new int[N];
    
    srand(time(0));
	for(int i = 0; i < N; i++)   			//随机生成规模为N的数组 
		a[i] = 1+(rand()%20-10);
	/*
	for(int i = 0; i < N; i++)
		cout << a[i] << " ";                //输出数组 
	cout << endl;  
	*/
	int interations;
	
	cout << "Please input the interations:";
	cin  >> interations;                				//输入迭代次数 
	
	start = clock();
	for(int i = 0; i < interations; i++)
	 	MaxSum = MaxSubsequenceSum1(a, N); 
	cout << "For algorithm1, the maximun sum is:" << MaxSum << endl;
	stop  = clock();
	ticks = stop - start;
	total_time = ((double)(stop - start))/CLK_TCK;
	duration = total_time/interations;
	cout << "interations: " << interations << endl;
	cout << "ticks: " << ticks << endl;
	cout << "total time: " << total_time << endl;
	cout << "duration: " << duration << endl;
	
	cout << endl;
	
	start = clock();
	for(int i = 0; i < interations; i++)
	 	MaxSum = MaxSubsequenceSum4(a, N); 
	cout << "For algorithm4, the maximun sum is:" << MaxSum << endl;
	stop  = clock();
	ticks = stop - start;
	total_time = ((double)(stop - start))/CLK_TCK;
	duration = total_time/interations;
	cout << "interations: " << interations << endl;
	cout << "ticks: " << ticks << endl;
	cout << "total time: " << total_time << endl;
	cout << "duration: " << duration << endl;
	
	system("pause");
	return 0;
} 
