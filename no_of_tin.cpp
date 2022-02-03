#include <iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter the amount"<<endl;
	cin>>num;
	int ten=0,seven=0,five=0,three=0,one=0;
	
	int remainder=0;
	switch(true){
		case true:
			ten= num/10;
			remainder= num%10;	
			cout<<"the tine of 10 is "<<ten<<endl;
			
			seven= remainder/7;
			remainder= remainder%7;	
			cout<<"the tine of 7 is  "<<seven<<endl;
			
			five= remainder/5;
			remainder= remainder%5;	
			cout<<"the tine of 5 is  "<<five<<endl;
			
			three= remainder/3;
			remainder= remainder%3;	
			cout<<"the tine of 3 is  "<<three<<endl;
			
			one= remainder/1;
			remainder= remainder%1;	
			cout<<"the tine of 1 is  "<<one<<endl;
			
			break;
		
		default:
			cout<<"invalid expression";
			
	}
	cout<<"answer is: "<<ten+seven+five+three+one;
	return 0;
}
