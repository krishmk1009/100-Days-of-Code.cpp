 void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            vector<int>arr;
            
            int left = 0;
            int right = 0;
            
            while(left <n && right <m){
                
                if(arr1[left] < arr2[right]){
                    arr.push_back(arr1[left++]);
                    
                    
                }
                
                else if(arr1[left] > arr2[right]){
                    arr.push_back(arr2[right++]);
                    
                }
                
                else{
                    arr.push_back(arr1[left++]);
                }
            }
            
            
            
            while(left <n){
                arr.push_back(arr1[left++]);
            }
            
            while(right <m){
                arr.push_back(arr2[right++]);
            }
            
            int i =0;
            
            for(;i<n+m ; i++){
                if(i<n)  arr1[i] = arr[i];
                else arr2[i-n] = arr[i];
               
            }
            
           
        } 
