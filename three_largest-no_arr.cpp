#include <iostream>
using namespace std;
int LargestThree(int arr[],int n){
	int first=0,second = 0 , third = 0;
	for(int i=0;i<n;i++){
		first = max(first, arr[i]);
		
	}
	cout<<first<<" ";
	
	for(int i=0;i<n;i++){
		if(arr[i]!= first){
		second = max(second, arr[i]);
		
	}
	
	}
	cout<<second<<" ";
	for(int i=0;i<n;i++){
		if(arr[i]!= first && arr[i]!= second){
		third = max(third, arr[i]);
		
	}
	
	}
	cout<<third<<" ";
	cout<<endl<< "returning back with ";
	return 0;
}

int main(){
	
	int arr[7]= { 4,3,9,8,1,6,1};
	
	
	cout<<LargestThree(arr,7);
	
	return 0;
}


/*
OR

#include<iostream>
using namespace std;

void three_largest(int arr[], int arr_size)
  {
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  
    third = first = second = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}
int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   three_largest(nums, n);
    return 0;
}
*/
