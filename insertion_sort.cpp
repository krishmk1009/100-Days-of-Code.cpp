#include <iostream>
using namespace std;

int insertionSort(int arr[], int size){
	
	for(int i=1; i<size;i++){
		int temp = arr[i];
		int j = i-1;
		while(j>=0){
			
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		j--;
			
		}
		arr[j+1]=temp;
	}
	for(int i = 0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	
	int arr[] = {4,9,2,1,12};
	insertionSort(arr,5);
	return 0;
}
