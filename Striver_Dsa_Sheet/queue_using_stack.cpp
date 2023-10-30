class MyQueue {
public:
stack<int> s;
stack<int>temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    
    int pop() {

        while(!s.empty()){
            int top = s.top();
            temp.push(top);
            s.pop();
        }
        
        int ele = temp.top();
        temp.pop();

        while(!temp.empty()){
            int top = temp.top();
            s.push(top);
            temp.pop();
        }

        return ele;

    }
    

    int peek() {
        while(!s.empty()){
            int top = s.top();
            temp.push(top) ; 
            s.pop();
        }

        int ans = temp.top();
       

    while (!temp.empty()) {
        int top = temp.top();
        s.push(top);
        temp.pop();
    }

        return ans;
    }
    
    bool empty() {
        return s.empty();
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
