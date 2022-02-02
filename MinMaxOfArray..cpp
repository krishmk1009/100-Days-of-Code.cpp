#include <iostream>
using namespace std;

int Max(int arr[],int size){
	int maxi=0;
	
	
	for(int i=0;i<5;i++){
		
		maxi=max(maxi,arr[i]);
		
//		   OR
//		if(arr[i]>max){
//			max=arr[i];
//	}
	}
	
	return maxi;

}
int Min(int arr[],int size){
	int mini=1000;
for(int i=0;i<5;i++){

	mini=min(mini, arr[i]);
//	   OR
//	if(arr[i]<min){
//			min=arr[i];
//		}
	}
			return mini;	}
			
int main(){
	
	int arr[5]={1,8,7,61,3};
	cout<<Max(arr,5)<<endl;
	cout<<Min(arr,5);

	
	
	return 0;
}
