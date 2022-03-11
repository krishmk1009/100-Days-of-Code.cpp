#include <iostream>
using namespace std;


void nToStr(int n , string arr[]){
	int ans = 0;
	while(n!=0){
		int digit = n%10;
		ans = (ans*10) + digit;
		n = n/10;
	}
	
	
	
	
	while(ans!=0){
		int digit = ans%10;
		ans = ans/10;
		cout<<arr[digit]<<endl;
	}
	
}
int main(){
	
	int n;
	cin>>n;
	
	string arr[10]={"zero", "one","two","three","four","five","six","seven","eight","nine"};
	cout<<endl;
	nToStr(n,arr);
	cout<<endl;
}
