#include <iostream>
using namespace std;

int setBits(int a,int b){
	int ans=0;
//	int i = 1
	while(a!=0 ){
		
		if(a&1){
			ans++;
		}
		a=a>>1;
		
		while( b!=0){
			
		
		if(b&1){
			ans++;
		}
		b= b>>1;
	}
	}
	return ans;
}

int main(){
	
	int a,b;
	cin>>a>>b;
	cout<<setBits(a,b);
	
	return 0;
}
