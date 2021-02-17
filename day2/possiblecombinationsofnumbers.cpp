#include<bits/stdc++.h>
using namespace std;
void Combination(vector<int>a[], int reqLen, int start, int currLen, bool check[], int len)
{
	if(currLen > reqLen)
	return;
	else if (currLen == reqLen)
	{
		cout<<"\t";
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
		return;
	}
	if (start == len)
	{
		return;
	}
	check[start] = true;
	Combination(a, reqLen, start + 1, currLen + 1, check, len);
	check[start] = false;
	Combination(a, reqLen, start + 1, currLen, check, len);
}
//main( ) here
//call combination for every i i.e size of subarry
