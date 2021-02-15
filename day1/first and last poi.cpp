#include<bits/stdc++.h>
using namespace std;
int first(vector<int>arr,int start ,int end,int n,int x)
{
	if(end>=start)
	{
	
		int mid=start+(end-start)/2;
	
	     if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), end, n,x);
        else
            return first(arr, start, (mid - 1), n,x);
}
    return -1;
}

int last(vector<int>arr,int start ,int end,int n,int x)
{
	
		int mid=start+(end-start)/2;
	
	    if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, start, (mid - 1),n,x);
        else
            return last(arr, (mid + 1),end,n,x);
    
    return -1;
}

int main()
{
	vector<int>arr={1,1,1,2,2,2,2,2,3,3,3,3,3,3,4};
	int x=2;
	int n=arr.size();
	int first_occ=first(arr,0,n-1,n,x);
	int last_occ=last(arr,0,n-1,n,x);
	cout<<first_occ<<"  "<<last_occ;
}
