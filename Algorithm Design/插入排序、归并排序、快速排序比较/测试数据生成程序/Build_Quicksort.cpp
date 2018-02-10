#include <iostream>

void Build_Quicksort (int A[], int l, int r)
{
	if ( l >= r ) return;
	int mid=(l+r)/2;
	int first=A[mid];
	for (int i=mid;i>l;--i)
		A[i]=A[i-1];
	A[l]=first;
	Build_Quicksort (A,l+1,mid);
	Build_Quicksort (A,mid+1,r);
}