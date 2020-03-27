class MyStack {
     
public:
    queue<int>q1;
    
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
        int y=q1.size()-1;
        
        for(int i=0;i<y;i++)
        {
            int j=q1.front();
            q1.pop();
            q1.push(j);
        }
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
       int pop() {
        int n = q1.front();
        q1.pop();
        return n;
    }
 
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return (q1.empty());
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