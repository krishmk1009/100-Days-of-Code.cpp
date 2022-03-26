#include <iostream>
using namespace std;

bool isSorted(int *arr,int size){
	if(size==0 || size == 1){
		return true;
	}

	if(arr[0]>arr[1]){
		return false;
	}
	else{
		bool remaining = isSorted(arr+1,size-1);
		return remaining;
	}
}

int main()
{
	int arr[] = {1,2,4,5,6,7};

	int ans = isSorted(arr,6);
	if(ans){
		cout<<"Array is sorted";
	}
	else{
		cout<<"Array is not sorted";
	}
	return 0;   
}