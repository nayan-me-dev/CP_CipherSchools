#include <bits/stdc++.h>
using namespace std;

void helper(vector<string>& result, int open, int close, int N, string str) {
    if (open < 0 || close < 0 || open > N || close > N || close > open) {
        return;
    }
    if (open == N && close == N) {
        result.emplace_back(str);
        return;
    }

    helper(result, open + 1, close, N, str + "(");
    helper(result, open, close + 1, N, str + ")");
}

vector<string> balancedParenthesis(int N) {
    vector<string> result;
    helper(result, 0, 0, N, "");
    return result;
}
int main() {
    vector<string> result = balancedParenthesis(5);
    for (string a : result) {
        cout << a << "\n";
    }
    return 0;
}
