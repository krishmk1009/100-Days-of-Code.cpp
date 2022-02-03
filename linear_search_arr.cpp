#include <iostream>
using namespace std;

bool search(int arr[],int size, int key){
	for(int i=0;i<size;i++){	
	if(arr[i]==key){
		return true;
	}
}
	return false;
}
int main(){
		int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	
	bool found = search(arr,n,key);
	if(found){
		cout<<"the key is present";
	}
	else{
		cout<<"key is not present";
	}
	
	return 0;
}
