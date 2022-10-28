class Solution {
    
 
    
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
    unordered_map<int,int>mp;
        vector<int>ans;
         
    sort(nums1.begin(), nums1.end());   
    auto last = unique(nums1.begin(), nums1.end());  
    nums1.erase(last, nums1.end()); 
        
    sort(nums2.begin(), nums2.end());   
    auto last2 = unique(nums2.begin(), nums2.end());  
    nums2.erase(last2, nums2.end()); 
    
    sort(nums3.begin(), nums3.end());   
    auto last3 = unique(nums3.begin(), nums3.end());  
    nums3.erase(last3, nums3.end()); 
    
    for(int i = 0 ; i<nums1.size()  ; i++){
        if(mp.find(nums1[i]) == mp.end()){
            mp[nums1[i]] = 1;
        }
    }
        
    for(int i = 0 ; i<nums2.size()  ; i++){
        if(mp.find(nums2[i]) != mp.end()){
            mp[nums2[i]] ++;
        }
        else{
            mp[nums2[i]] = 1;
        }
        
    }
        
    for(int i = 0 ; i<nums3.size()  ; i++){
        if(mp.find(nums3[i]) != mp.end()){
            mp[nums3[i]] ++;
        }
        else{
            mp[nums3[i]] = 1;
        }
        
    }
        
    unordered_map<int,int>:: iterator it;
        
        for(auto it=mp.begin() ; it!=mp.end() ; it++){
            if(it->second >=2){
                ans.push_back(it->first);
            }
            
        }
        
        return ans;
        
    }
};
