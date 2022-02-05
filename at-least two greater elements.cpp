#include <iostream>
using namespace std;

void two_atleast(int arr[],int n){
	
	for(int i=0;i<n;i++){
		int counter = 0;
		
		for(int j= 0;j<n;j++){
			
			if(arr[j]>arr[i]){
				counter++;
			}
			
			
		}
		if(counter>=2){
				cout<<arr[i]<<" ";
			}
	}
}
int main(){
	
	
	 int arr[]={7, 12, 9, 15, 19, 32, 56, 70};
	 
	 two_atleast( arr, 8);
	return 0;
}
