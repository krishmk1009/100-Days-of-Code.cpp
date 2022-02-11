#include <iostream>
using namespace std;
int binarySearch(int arr[], int n,int s,int e, int key){
	
	int start = s;
	int end = e;
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

int rotated(int arr[], int size , int key){
	
	int s = 0;
	int e = size-1;
	int mid= s+ (e-s)/2;
	
	while(s<e){
		if(key<=arr[mid] && key <=e){
//			
			return binarySearch(arr,size,mid,e,key);
		}
		 else if (key>=s && key <=arr[mid]) {
//			
			return binarySearch(arr,size,s,mid,key);
		}
	}
}

int main(){
	int arr[7]={4,6,12,15,1,3,5};
	int answer =rotated(arr,7,5);
	cout<<answer;
//	return 0;
}
