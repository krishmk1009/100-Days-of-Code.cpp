 void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int low = 0;
        int high = n-1;
        
        while(low<high){
            
            if(arr[low] <0){
                low++;
            }
            else if(arr[high]>0){
                high--;
            }
            else{
                swap(arr[low] , arr[high]);
            }
        }
