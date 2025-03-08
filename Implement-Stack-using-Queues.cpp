class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {}

    void push(int x) {
        if (q1.empty())
            q1.push(x);
        else {
            q1.pop();
            q1.push(x);
        }
        q2.push(x);
    }

    int pop() {
        q1.pop();
        int x;
        while (true) {
            x = q2.front();
            q2.pop();
            if (q2.empty())
                break;
            q1.push(x);
        }
        if (!q1.empty()) {
            q2 = q1;
            int y;
            while (true) {
                y = q1.front();
                q1.pop();
                if (q1.empty()) {
                    q1.push(y);
                    break;
                }
            }
        }
        return x;
    }

    int top() { return q1.front(); }

    bool empty() {
        if (q2.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */