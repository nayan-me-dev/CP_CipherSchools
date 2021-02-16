#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>arr, int start, int end, int x)
{
    while (start <= end) {
        int m = start + (end - start) / 2;

        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            start = m + 1;
        else
            end = m - 1;
    }

    return -1;
}
int main()
  {
   vector<int> arr={1,5,6,7,8,9,11,12};
   int n=arr.size();
   cout<<binarysearch(arr,0,n-1,6);
  }
