vector<int> Solution::prevSmaller(vector<int> &A) {
    
    vector<int> ans (A.size() , -1);
    stack<int>s;
    
    
    for(int i = 0;i<A.size() ; i++){
        
        while(!s.empty() && A[i] <=s.top()){
            s.pop();
        }
        
        
        if(!s.empty()){
            ans[i] = s.top();
        }
        
        
        
        
        s.push(A[i]);
    }
    
    return ans;
}
