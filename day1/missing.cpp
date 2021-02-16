#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>arr)
{
    int x1=arr[0];
    int x2=1;
    for(int i=1;i<arr.size();i++)
    {
        x1=x1 ^ arr[i];
    }
    for(int i=2;i<=arr.size()+1;i++)
    {
    x2=x2 ^ i;
    }
    return (x1^x2);

}
int main()
{
vector<int>arr={1,2,3,4,6,7};
cout<<missing(arr);
}
