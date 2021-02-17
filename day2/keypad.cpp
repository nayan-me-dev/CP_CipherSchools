#include<bits/stdc++.h>

using namespace std;
vector<string> keypad ={" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void helper(vector<string>&result,string digits, int index,string res)
{
    if(index==digits.size()){
        result.push_back(res);
        return;
}
string possible=keypad[digits[index]-'0'];
for(int i=0;i<possible.size();i++)
{
res.push_back(possible[i]);
helper(result,digits,index+1,res);
res.pop_back();
}
}
vector<string>possiblecombi(string digits)
{
if(strlen(digits)==0)
{
    return vector<string>{};
}
vector<string>result;
helper(result,digits,0,"");
}
int main()
{
string s="45";
vector<string>resul=possiblecombi(s);
for(string a:resul)
{
cout<<a<<endl;
}

}
