#include<bits/stdc++.h>
using namespace std;
void spiral(vector<vector<int>>&matrix)
{
    int rs=0,re=matrix.size()-1,cs=0,ce=matrix[0].size()-1;
    while(rs<=re && cs<=ce)
    {
    for (int i=cs;i<=ce;i++)
    {
    cout<<matrix[rs][i]<<" ";
    }
    for (int j = rs; j <= re; j++)
    {
        cout << matrix[j][ce] << " ";
    }
    ce--;

    if (rs <= re)
    {
        for (int i = ce; i >= cs; i--)
        {
            cout << matrix[re][i] << " ";
        }
        re--;
    }

    if (cs <= ce)
    {
        for (int j = re; j >= rs; j--)
        {
            cout << matrix[j][cs] << " ";
        }
        cs++;
    }
    }
}
int  main()
{
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    spiral(matrix);
    return 0;
}
