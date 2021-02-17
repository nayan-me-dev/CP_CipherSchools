#include <bits/stdc++.h>
using namespace std;
#define MAX 5
void helper(int m[MAX][MAX], int i, int j, int n, vector<string>&ans, string temp)
{
    if(i<0||i>=n||j<0||j>=n|| m[i][j]!=1) return;
    if(i==(n-1) && j==(n-1))
    {
        ans.push_back(temp);
        return;
    }
    m[i][j]=-1;
    helper(m, i+1, j,n, ans, temp+'D');
    helper(m, i, j-1,n, ans, temp+'L');
    helper(m, i, j+1,n, ans, temp+'R');
    helper(m, i-1, j,n, ans, temp+'U');
    m[i][j]=1;

}
vector<string> printPath(int m[MAX][MAX], int n) {
    string temp="";
    vector<string> ans;
    helper(m, 0, 0, n, ans, temp);
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
