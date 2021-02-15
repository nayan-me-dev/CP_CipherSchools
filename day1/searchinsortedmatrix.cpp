#include<bits/stdc++.h>
using namespace std;
int row=0;
int col=0;
int find(vector<vector<int>>arr,int n,int x )
{
	if(n==0)
	{
		return -1;
	}
	int small_ele=arr[0][0],largest=arr[n-1][n-1];
	if(x<small_ele||x>largest)
	{
		return -1;
	}
	int i =0,j=n-1;
	while(i<n &&j>=0)
	{
		if(arr[i][j]==x)
		{
			row=i;
			col=j;
			return  1;
		}
		if (arr[i][j]>x)
		{
			j--;
		}
		else
		{
			i++;	
		}
		
	}
	return 0;
}
int main()
{
	vector<vector<int>>arr= {{1,2,3,4 },
							 {15,20,30,40},
							 {21,22,32,45},
							 {31,32,42,54}};
	int n=arr.size();
	if(find(arr,n,45))
	{
	    cout<<"found at"<<"["<<row<<","<<col<<"]";
	}
	else 
	{
	    cout<<"not in matrix";
	}
	return 0;
}
