class MinStack {
private:
    stack<int> minSt;
    int minElem = INT_MAX;
    map<int, int> mpp; 

public:
    MinStack() {}

    void push(int val) {
        minSt.push(val);
        mpp[val]++;
    }

    void pop() {
        int x = minSt.top();
        minSt.pop();
        mpp[x]--;
        if (mpp[x]<=0) mpp.erase(x);
    }

    int top() {
        return minSt.top();
    }

    int getMin() {
        return mpp.begin()->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */