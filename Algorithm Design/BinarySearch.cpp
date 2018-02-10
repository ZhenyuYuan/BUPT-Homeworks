//Binary search
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void BinarySearch(vector<int> &a, int s)
{
	int left = 0;
	int right = a.size()-1;
	bool search = 0;
	while (left <= right)
	{
		int middle = (left + right)/2;
		if (s == a[middle])    	
		{
			cout << "Search successful!" << endl;
	    	search = 1;
		}
		if (s > a[middle])		
			left = middle +1;
		else 	
			right = middle -1;
	}
	if(!search)		
		cout << "Search fail!" << endl;
}

int main()
{
	vector<int> a;
	
	int num, n, s;
	
	cout << "Please input the amount of numbers: ";
    cin >> n;
    
    cout << "Please input the numbers: ";
	for(int i = 0; i < n; i++)
    {
    	cin >> num;
    	a.push_back(num);
    }	
    	
    cout << "Please input the number you want search: ";
    cin  >> s;
	BinarySearch(a, s);
	
	system("pause");
	return 0;
}
