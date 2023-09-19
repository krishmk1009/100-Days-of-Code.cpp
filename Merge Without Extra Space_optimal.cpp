Merge Without Extra Space

// // We will declare two pointers i.e. left and right. The left pointer will point to the last index of the arr1[](i.e. Basically the maximum element of the array). The right pointer will point to the first index of the arr2[](i.e. Basically the minimum element of the array).
// Now, the left pointer will move toward index 0 and the right pointer will move towards the index m-1. While moving the two pointers we will face 2 different cases like the following:
// If arr1[left] > arr2[right]: In this case, we will swap the elements and move the pointers to the next positions.
// If arr1[left] <= arr2[right]: In this case, we will stop moving the pointers as arr1[] and arr2[] are containing correct elements.
// Thus, after step 2, arr1[] will contain all smaller elements and arr2[] will contain all bigger elements. Finally, we will sort the two arrays.

 //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
           
            int left = n-1;
            int right = 0;
            
            
            while(left >=0 && right <m){
                
                if(arr1[left]>arr2[right]){
                    swap(arr1[left--] , arr2[right++]);
                    
                }
                else{
                    left--;
                }
            }
            
            sort(arr1 , arr1+n);
            sort(arr2 , arr2+m);
           
        } 
