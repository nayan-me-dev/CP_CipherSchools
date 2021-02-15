#include<bits/stdc++.h>
using namespace std;
vector<int> resul(vector<int> arr)
{
    vector<int>result;
	int n=arr.size();
	if(n==1)
		return result;
	int i=0,j=n-1;
	while(i<n-1)
	{
		while((i<n-1)&&(arr[i+1]<=arr[i])) i++;
		if(i==n-1)break;
		int buy=i++;
		while((i<n)&&(arr[i]>=arr[i-j]))i++;
		int sell =i-1;
		result.push_back(buy);
		result.push_back(sell);
	}
	return result;
}
int main()
{
	vector<int> arr={ 100,200,300,800,100,500,600};
	vector<int>result=resul(arr);
	for(int i=0;i<result.size()-1;i+=2)
	{
		cout<<"buy on  "<<result[i]<<"sell on  "<<result[i+1];
	}
	
}
