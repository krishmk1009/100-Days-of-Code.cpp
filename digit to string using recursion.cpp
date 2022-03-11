#include <iostream>
using namespace std;


void nToStr(int n , string arr[]){
	
	if(n==0)
		return;
		
	int digit = n%10;
	n = n/10;
	
	nToStr(n,arr);
	cout<<arr[digit]<<endl;
}
int main(){
	
	int n;
	cin>>n;
	
	string arr[10]={"zero", "one","two","three","four","five","six","seven","eight","nine"};
	cout<<endl;
	nToStr(n,arr);
	cout<<endl;
}
