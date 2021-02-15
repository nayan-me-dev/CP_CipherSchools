/*#include<bits/stdc++.h>
using namespace std;
vector<int> sorting(vector<int>&arr)
{
	sort(arr.begin(),arr.end());
	return arr;
}
int main()
{
	vector<int> arr={0,1,0,1,0,1,0,1,0,1};
	sorting(arr);
	for(int i=0;i<arr.size();i++)
	{
	    cout<<arr[i]<<" ";
	}
	
} this solution takes O(nlogn) time. its naive soltuion
----------------------------------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
vector<int> sorting(vector<int>&arr)
{
	int start=0;
	int end= arr.size()-1;
	while(start<end)
	{
		if(arr[start]==1)
		{
			swap(arr[start],arr[end]);
			end--;
		}
		else
		{
			start++;
		}
	}
	return arr;
}	
 int main()
 {
 	vector<int> arr={0,1,0,1,0,1,0,1,0,1};
	sorting(arr);
	for(int i=0;i<arr.size();i++)
	{
	    cout<<arr[i]<<" ";
	}
 }// this takes only O(n)
