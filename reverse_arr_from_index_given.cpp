#include <iostream>
using namespace std;

void reverse(int arr[],int size,int index){
	int s =index+1;
	int e = size-1;
	
while(s<e){
	swap(arr[s],arr[e]);
	s++;
	e--;
}
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
}
int main(){
	
	int arr[5]={5,9,25,8,3};
	
	reverse(arr,5,1);
}
