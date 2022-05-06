class MyStack {
public:
    int t;
    queue<int>q;
    MyStack() {
        
        
    }
    
    void push(int x) {
        if(q.empty())q.push(x);
        else
        {
       int size=q.size();
        q.push(x);
        while(size--)
        {
            int t=q.front();
            q.pop();
            q.push(t);
            
        }
          
        }
        
    }
    
    int pop() {
       int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())return true;
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