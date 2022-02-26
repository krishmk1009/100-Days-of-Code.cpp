#include <iostream>
using namespace std;

int GCD(int a,int b){
	if(a==0){
		return b;
	}
	if(b==0){
		return a;
	}
	while(a!=b){
		if(a>b){
			a = a-b;
		}
		else if(b>a){
			b = b-a;
		}
	}
	return a;
}

int main(){
	
int a,b;
cin>>a>>b;

cout<<GCD(a,b);	
	return 0;
}
