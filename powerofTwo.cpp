#include <iostream>
using namespace std;

int twoPower(int n){
	
	//base case;
	if(n==0){
		return 1;
	}
	
	
	return  2 * two(n-1);
}

int main(){
	
	int n;
	cin>>n;
	
	int ans = twoPower(n);
	cout<<ans;
	return 0;
}
