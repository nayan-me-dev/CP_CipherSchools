 //leetcode
 class MyStack {

    queue<int> q1;
    queue<int> q2;
 public:

MyStack()
{

}

void push(int x)
{
   q1.push(x);

}

int pop()
{
    while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    int last=q1.front();
    q1.pop();

    q1=q2;
    queue<int> empt;
    q2=empt;
    return last;
}

int top()
{
    return q1.back();
}
bool empty()
{
    if(q1.empty()) return 1;
        return 0;
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
