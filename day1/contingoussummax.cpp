#include<bits/stdc++.h>
using namespace std;
int largestcontisum(vector<int>arr)
{
int max_end=INT_MIN,maxsum=0;
int start=0,end1=0,s=0;
for(int i=1;i<arr.size();i++)
{
   max_end+=arr[i];
   if(maxsum<max_end)
   {
        maxsum=max_end;
        start =s;
        end1=i;
   }
   if(max_end<0)
   {
   max_end=0;
   s=i+1;
   }
}
for(int i=start;i<end1;i++)
{
cout<<arr[i]<< " ";
}
return maxsum;
}
int main()
{
vector<int> arr={1,5,2,6,17,8,1,5};
int maxs= largestcontisum(arr);
cout<<"max array"<<maxs;
return 0;
}
