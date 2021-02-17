#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
if(n==1)
{
    return 1;
}
else
{
    return n*fac(n-1);
}
}
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
int n=5;
cout<<"factorial"<<fac(n)<<"fibonacci"<<fib(n);
}


