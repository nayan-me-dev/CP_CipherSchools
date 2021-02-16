#include<bits/stdc++.h>
using namespace std;
int search(vector<int>arr,int start,int end,int x)
{
    if(start>end)
    {
    return -1;
    }
    int mid=(start)+(end-start)/2;
    if(arr[start]==x)
    {
        return start;
    }
    if(arr[end]==x)
    {
     return end;
    }
    if(arr[mid]==x)
        return mid;
    if(arr[start]<=arr[mid])
    {
        if(x>=arr[start] && x<=arr[mid])
        {
                return search(arr,start,mid-1,x);
        }
        return search(arr,mid+1,end,x);
    }
    if(x>=arr[mid]&&x<=arr[end])
    {
        return search(arr,mid+1,end,x);
    }
    return search(arr,start,mid-1,x);
}
int main()
{
vector<int>arr={5,6,7,1,2,3,4};
int n= arr.size();
int x= 6;
int index=search(arr,0,n-1,x);
if(index!=-1)
{
cout<<index;
}
else
{
cout<<"not found";
}
}
