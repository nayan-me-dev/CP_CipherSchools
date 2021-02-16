#include<bits/stdc++.h>
using namespace std;
vector<int> mergesort(vector<int>& first, vector<int>& second)
{
    int i = 0, j = 0, k = 0;
    vector<int> result(first.size() + second.size());

    while (i < first.size() && j < second.size())
    {
        if (first[i] <= second[j])
        {
            result[k] = first[i];
            i++;
        }
        else
        {
            result[k] = second[j];
            j++;
        }
        k++;
    }

    while (i < first.size())
    {
        result[k] = first[i];
        i++;
        k++;
    }

    while (j < second.size())
    {
        result[k] = second[j];
        j++;
        k++;
    }

    return result;
}
int main()
{
vector<int> first={1,2,3,4,5,6};
vector<int>second={1,4,5,6,8,9};
vector<int> result=mergesort(first,second);
for(int i=0;i<result.size();i++)
{
    cout<<result[i];
}
}
