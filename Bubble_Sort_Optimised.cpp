#include <iostream>
using namespace std;
int BubbleSort(int arr[],int n){
	
	for(int i = 1; i<n;i++){
		
		bool isSwapped = false;
		for(int j=0;j<n-i;j++){
			
			if(arr[j]>arr[j+1]){
				
				swap(arr[j],arr[j+1]);
				isSwapped = true;
			}
		}
		if(isSwapped==false){
			break;
		}
	}
	
	for(int i = 0;i<n;i++){
//		alredy sorted and hence no need to check for other rounds
		cout<<arr[i]<<" ";
	}
}
int main(){
	
	int arr[] = {4,9,2,1,12};
	
	BubbleSort(arr,5);
	
	return 0;
}
