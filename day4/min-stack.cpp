//leetcode
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s;
    stack<int>ss;
    MinStack() {
    }

    void push(int x) {
        s.push(x);
        if(ss.size()==0||x<=ss.top())
        {
            ss.push(x);
        }
        return;
    }

    void pop() {
        int ans=s.top();
        s.pop();
        if(ans==ss.top())
        {
            ss.pop();
        }
        return;
    }

    int top() {
        if(s.size()==0)
            return -1;
        else
            return s.top();
    }

    int getMin() {
        if(ss.size()==0)
            return -1;
        else
            return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
