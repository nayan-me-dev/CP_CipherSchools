#include <bits/stdc++.h>
using namespace std;
void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}
int main()
{
queue<int> Queue;
for(int i=10;i>=0;i--)
{
    Queue.push(i);
}
reverseQueue(Queue);
Print(Queue);
return 0;
}
