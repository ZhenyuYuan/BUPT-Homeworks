#include <iostream>
#include <cstdlib>
using namespace std;

void Sort(int A[],int n);

void InsertSort(int a[], int n, long long &MoveNum, long long &CompNum);

void Merge(int c[], int d[], int l, int m, int r, long long &CompNum, long long &MoveNum);
void MergePass(int x[], int y[], int s, int n, long long &MoveNum, long long &CompNum);
void MergeSort(int a[], int n, long long &CompNum, long long &MoveNum);

void QuickSort( int A[], int l, int r, long long &MoveNum, long long &CompNum);
