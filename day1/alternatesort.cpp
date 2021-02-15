
#include<bits/stdc++.h>
using namespace std;
vector<int> resul(vector<int>&arr)
{
	int n=arr.size();
	sort(arr.begin(),arr.end());
	int i=0,j=n-1;
	vector<int> result;
	while(i<j)
	{
	   result.push_back(arr[j--]);
	   result.push_back(arr[i++]);
	}
	if(n%2!=0)
	{
		result.push_back(arr[i]);
	}
	return result;
}
int main()
{
	vector<int> arr={11,5,1,68,68,45,742,848};
	vector<int>result=resul(arr);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i];
	}
}
