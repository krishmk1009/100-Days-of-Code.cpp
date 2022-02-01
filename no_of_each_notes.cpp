#include <iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter the amount"<<endl;
	cin>>num;
	int hundred=0,fifty=0,twenty=0,ten=0,one=0;
	
	int remainder=0;
	switch(true){
		case true:
			hundred= num/100;
			remainder= num%100;	
			cout<<"the notes of hundred "<<hundred<<endl;
			
			fifty= remainder/50;
			remainder= remainder%50;	
			cout<<"the notes of fifty "<<fifty<<endl;
			
			twenty= remainder/20;
			remainder= remainder%20;	
			cout<<"the notes of twenty "<<twenty<<endl;
			
			ten= remainder/10;
			remainder= remainder%10;	
			cout<<"the notes of ten "<<ten<<endl;
			
			one= remainder/1;
			remainder= remainder%1;	
			cout<<"the coins of one "<<one<<endl;
			
			break;
		
		default:
			cout<<"invalid expression";
			
	}
	return 0;
}
