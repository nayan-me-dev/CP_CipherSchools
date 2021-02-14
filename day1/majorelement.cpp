#include<bits/stdc++.h>
using namespace std;
int indexa(vector<int> a)
{
	int ci=0,count=1;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==a[ci])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			ci=i;
			count=1;
		}
		return ci;
		}	
}
int major(vector <int> a)
{
	int index=indexa(a);
	int fre=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==a[index])
				fre++;	
		}	
	if(fre>a.size()/2)
	{
		return a[index];
	}
	else 
	{
	
		return 0;
}
}
int main()
{
	vector<int> a= {1, 1, 3, 2, 1, 1, 1, 7};
	if(major(a))
	{
		cout<<"exist";
	}
	else 
	{
		cout<<"no";
	}
}
