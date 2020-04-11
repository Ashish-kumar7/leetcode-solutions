class MinStack {
public:
    stack<int>s1;
    stack<int>s2;
    MinStack() {   
    }
    void push(int x) {
        if(s1.empty()){
            s1.push(x);
            s2.push(x);
        }
        else {
            if(x<=s2.top()){
                s2.push(x);
            }
            s1.push(x);  
        }  
    }
    void pop(){
        if(s1.top()==s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    int top(){
        return s1.top();
    }
    int getMin(){
        return s2.top();
    }
};