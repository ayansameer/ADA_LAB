A linear search scans one item at a time, without jumping to any item 

The worst case complexity is  O(n), sometimes known an O(n) search
Time taken to search elements keep increasing as the number of elements are increased.
A binary search however, cut down your search to half as soon as you find middle of a sorted list.

The middle element is looked to check if it is greater than or less than the value to be searched.
Accordingly, search is done to either half of the given list

Input data needs to be sorted in Binary Search and not in Linear Search
Linear search does the sequential access whereas Binary search access data randomly.
Time complexity of linear search -O(n) , Binary search has time complexity O(log n).
 Linear search performs equality comparisons and Binary search performs ordering comparisons


Let us see the code of both searches



#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n,int target)
{
	for(int i=0;i<n;i++)
	{
		if(target == a[i])
		{
			cout<<"Found at "<<i<<endl;
			return;
		}
	}

	cout<<"Not Found"<<endl;
}

int main()
{
	int n;
	cout<<"Array Size : ";
	cin>>n;
	int a[n];

	cout<<"Enter Elements : \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cout<<"Targer Value : ";
	cin>>target;

	solve(a,n,target);		

	return 0;
}

// BINARY SEARCH 

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n,int target)
{
	int lower = 0;
	int high = n-1;
	int m;
	while(lower<=high)
	{
		m = (lower+high)/2;
		if(a[m]==target)
		{
			cout<<"Found at "<<m+1<<endl;
			return;
		}

		if(a[m]>target)
		{
			high=m-1;
		}
		else
		{
			lower = m+1;
		}
	}

	cout<<"Not Found"<<endl;
}

int main()
{
	int n;
	cout<<"Array Size : ";
	cin>>n;
	int a[n];

	cout<<"Enter Elements : \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cout<<"Targer Value : ";
	cin>>target;

	sort(a,a+(sizeof(a)/sizeof(a[0])));
	solve(a,n,target);				
	return 0;
}