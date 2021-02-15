#include<bits/stdc++.h>
using namespace std;

int findindex(vector<int>arr,int start,int end,int n)
{
	int mid = start+(end-start)/2;
	if((mid==0||arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
		{
		return mid;
	}
	else if(mid>0 && arr[mid-1]>arr[mid])
	{
		return findindex(arr,start,(mid-1),n);
	}
}
int peak(vector<int>arr,int n)
{
	return findindex(arr,0,n-1,n); 
}
int main()
{
vector<int>arr={10, 20, 15, 2, 23, 90, 67};
int n=arr.size();
cout<<peak(arr,n);
return 0;
}
