#include <iostream>
using namespace std;

void reverse(int arr[],int size){
	int start = 0;
	int end= size-1;
	
//	for(int i = 0 ; i<size;i++){
//		swap(arr[start],arr[end]);
//		start++;
//		end--;
//		
//		if(start>end){
//			break;
//		}

//	}     OR

while(start<end){
	swap(arr[start],arr[end]);
		start++;
		end--;
}


}

void printArr(int arr[],int size){
	
	for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[6]={5,9,3,6,-2,7};
	int brr[5]={5,10,89,598,7};
	
	reverse(arr,6);
	reverse(brr,5);
	
	printArr(arr,6);
	cout<<endl;
	printArr(brr,5);

	
	
	return 0;
}
