class MyQueue {
public:
    stack<int> st1, st2;
    MyQueue() {}
    
    void push(int x) {
        st2.push(x);
    }
    
    int pop() {
        int x;
        while (true){
            x = st2.top();
            st2.pop();
            if (st2.empty()) break;
            st1.push(x);
        }
        while (!st1.empty()){
            int y = st1.top();
            st2.push(y);
            st1.pop();
        }
        return x;
    }
    
    int peek() {
        int x;
        while (!st2.empty()){
            x = st2.top();
            st2.pop();
            st1.push(x);
        }
        while (!st1.empty()){
            int y = st1.top();
            st2.push(y);
            st1.pop();
        }
        return x;
    }
    
    bool empty() {
        return st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */