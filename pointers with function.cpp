#include <iostream>
using namespace std;

void update(int *p){
	*p = *p+1;
}

int getSum(int *arr,int n){   // similar to (int arr[],int n) 
	int sum = 0;
	cout<<"size of arr in this fun "<<sizeof(arr)<<endl;
	for(int i=0 ; i<n;i++){
		sum = sum + arr[i];
	}
	return sum;
}
int main(){
	/*
	int v= 5;
	int * ptr = &v;
	
	cout<<"before update "<<*ptr<<endl;
	update(ptr);
	cout<<"after update "<<*ptr<<endl;
	*/
	
	int arr[]= {1,2,3,4,5,6};
	cout<<"size of arr in main "<<sizeof(arr)<<endl;
	cout<<getSum(arr,6)<<endl;
	cout<<getSum(arr+2,6);  //using pointer we can pass the part of the array
	return 0;
}
