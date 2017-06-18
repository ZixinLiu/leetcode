class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    /** Initialize your data structure here. */
    MyStack() {
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(q1.empty()) {
            q2.push(x);
        
        }
        if(q2.empty()) {
            q1.push(x);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int top_ele;
        if(q1.empty()) {
            while(q2.size() != 1) {
                q1.push(q2.front());
                q2.pop();
            }
            top_ele = q2.front();
            q2.pop();
            return top_ele;
        }
        if(q2.empty()) {
            while(q1.size() != 1) {
                q2.push(q1.front());
                q1.pop();
            }
            top_ele = q1.front();
            q1.pop();
            return top_ele;
        }
    }
    
    /** Get the top element. */
    int top() {
        int top_ele;
        if(q1.empty()) {
            while(q2.size() != 1) {
                q1.push(q2.front());
                q2.pop();
            }
            top_ele = q2.front();
            q1.push(top_ele);
            q2.pop();
            return top_ele;
        }
        if(q2.empty()) {
            while(q1.size() != 1) {
                q2.push(q1.front());
                q1.pop();
            }
            top_ele = q1.front();
            q2.push(top_ele);
            q1.pop();
            return top_ele;
        }
        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return(q1.empty() && q2.empty());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */