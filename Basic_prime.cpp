#include <iostream>
using namespace std;



int main(){
	
	int n ;
	cin>>n;
	bool isPrime =1;
	cout<<endl;
	
	
	if(n==0 || n == 1){
		cout<<"not prime no";
	}
	
	for(int i=2; i<n/2 ; i++){
		if(n%i==0){
			cout<<"not prime number";
			isPrime = 0;
			break;
		}
	}
	
	if(isPrime == 1){
		cout<<"prime no";
	}
	
	return 0;
}
