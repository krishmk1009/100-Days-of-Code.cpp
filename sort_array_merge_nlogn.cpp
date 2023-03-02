class Solution {
public:

    void merge(vector<int>& arr , int left , int mid , int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    vector<int>first(n1);
    vector<int>second(n2);

    for(int i=0;i<n1;i++){
        first[i] = arr[i+left];
    }
    for(int i=0;i<n2;i++){
        second[i] = arr[mid+1+i];
    }

    int i=0,j=0,k=left;

    while(i<n1 && j<n2){
        if(first[i] <=second[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }
    
    
    while(i<n1){
        arr[k++] = first[i++];
    }
    while(j<n2){
        arr[k++] = second[j++];
    }
}

   void mergeSort(vector<int>& arr ,int left , int right){
        
        if(right>left){
            int mid = left +(right-left)/2;
            mergeSort(arr , left,mid);
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
      
    }
    vector<int> sortArray(vector<int>& nums) {
        int left  = 0;
        int right = nums.size()-1;

       
       mergeSort(nums,left,right);
       return nums;


    }
};
