#include <iostream>
using namespace std;

void mergeArr(int arr[],int m , int arr2[],int n , int arr3[]){
	
	int i=0,j=0;
	int k=0;
	
	while(i<m && j<n){
		if(arr[i]<arr2[j]){
			arr3[k++]=arr[i++];
		}
		else{
			arr3[k++]=arr2[j++];
		}
	}
	while(i<m){
		arr3[k++] = arr[i++];
	}
	while(j<n){
		arr3[k++]=arr2[j++];
	}
	
	
	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	
	int arr[5]={5,7,16,23,48};
int arr2[3]={1,9,18};

int arr3[8]={0};
	
	mergeArr(arr,5,arr2,3,arr3);
	print(arr3,8);
	return 0;
}
