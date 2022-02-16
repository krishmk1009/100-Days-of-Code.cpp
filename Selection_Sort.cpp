#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
		
		int minValue = i;
		for(int j=i+1;j<n;j++){
			
			if(arr[j]<arr[minValue]){
				minValue = j;
			}
		}
		swap(arr[minValue],arr[i]); 
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}
int main(){
	
	int arr[] = {4,9,2,1,12};
	
	SelectionSort(arr,5);
	
	return 0;
}
