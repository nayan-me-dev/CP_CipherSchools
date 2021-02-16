#include<bits/stdc++.h>
using namespace std;
int findwater(vector<int>arr)
{
int n=arr.size();
int left[n];
int right[n];
int amount=0;
left[0]=arr[0];
for(int i=1;i<n;i++)
{
left[i]=max(left[i-1],arr[i]);
}
right[n-1]=arr[n-1];
for(int i=n-2;i>=0;i--)
{
right[i]=max(right[i+1],arr[i]);
}
for(int i=0;i<n;i++)
{
amount+=min(left[i],right[i])-arr[i];
}
return amount;
}
int main()
{
vector<int>arr={0,1,0,2,1,0,1,3,2,1,2,1};
cout<<findwater(arr);
}
