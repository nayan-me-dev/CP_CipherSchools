#include<bits/stdc++.h>
using namespace std;

vector<int> resul(vector<int>&arr)
{
	
	int a0=0,a1=0,a2=0;
	int n=arr.size();
	for(int i=0;i<n;i++)
	{
		switch(arr[i])
		{
			case 0:
				a0++;
				break;
			case 1:
				a1++;
				break;
			case 2:
				a2++;
				break;	
		}
		}	
		vector<int>result(n);
		int i=0;
		while(a0>0)
		{
			result[i++]=0;
			a0--;
		}
		while(a1>0)
		{
			result[i++]=1;
			a1--;
		}
		while(a2>0)
		{
			result[i++]=2;
			a2--;
		}
		return result;
}
int main()
{
	vector<int>arr={1,1,0,1,0,1,0,2,0,1,0,1,2};
	vector<int>result=resul(arr);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i];
	}
}
