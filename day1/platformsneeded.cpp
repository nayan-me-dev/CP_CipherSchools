#include<bits/stdc++.h>
using namespace std;
int numplat(vector<int>arr,vector<int> dep)
{
int n=arr.size();
sort(arr.begin(),arr.end());
sort(dep.begin(),dep.end());
int plat=1,finalplat=1;
int i=1,j=0;
if(n==0)
{
   return 0;
}
if(n==1)
{
    return 1;
}
while(i<n &&j<n)
{
    if(arr[i]<=dep[j])
    {
    plat++;
    i++;
    }
    else if(arr[i]>dep[j])
    {
    plat--;
    i++;
    }
    if(plat>finalplat)
    {
    finalplat=plat;
    }
    return finalplat;
}
}
int main()
{
vector<int>arr={900,950,1200,1500,1800,1600,1400};
vector<int>dep={1000,1050,1220,1520,1820,1650,1650};
int num=numplat(arr,dep);
cout<<num;
}
