int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(), array.end());
        if(array[n-2]!=n){
            return n;
        }else if(n==2){
            if(array[0]==1){
                return 2;
            }else{
                return 1;
            }
        }
        
        int e = n-2;
        
        while(e>0){
            
            if(((array[e])-(array[e-1]))==1){
                
                e--;
                
            }else{
                
                int ans = array[e]-1;
                return ans;
                
            }
        }
    }
