class MinStack {
public:
    int topIndex;
     vector<int>stack ;

    MinStack() {
        topIndex = -1;

    }
    
    void push(int val) {
        stack.push_back(val);
        topIndex++;

    }
    
    void pop() {
        stack.pop_back();
        topIndex--;

        

        
    }
    
    int top() {
        
        int value = stack[topIndex];
        return value;
    }
    
    int getMin() {
        int ans = INT_MAX;

        for(auto a:stack){
            if(a<ans){
                ans = a;
            }
        }
        return ans;
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
