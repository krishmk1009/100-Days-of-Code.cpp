#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	
	int start = 0;
	int end = n-1;
	int	mid = (start + end)/2 ;
	
	while(start<=end){
		if( arr[mid] == key){
			return mid;
		}
		
		if(key >arr[mid]){
			start = mid + 1;	
		}
		else{
			end = mid - 1;
		}
		
		mid = (start + end)/2 ;

	}
	return -1;
}
int main(){
	


 int even[6] = {2,4,6,8,12,18};
    int odd[7] = {4,8,15,51,81,511,999};

    int evenIndex = binarySearch(even, 6, 8);

    cout << " Index of 8 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 7, 15);

    cout << " Index of 81 is " << oddIndex << endl;
	return 0; 
}
