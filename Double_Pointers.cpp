#include <iostream>

using namespace std;
 
 void update(int **ptr2){
// 	ptr2 = ptr2 + 1;    //change = no
 	
// 	*ptr2 = *ptr2 +1;  // change  = yes ptr;
 	
// 	**ptr2 = **ptr2 + 1;  // change  = yes i changed;
 	
 	
 	
 }
int main(){
	
	int i = 5;
	int *ptr = &i;
	int**ptr2 = &ptr;
	
	/*
	
	// print the value of each
	cout<<i<<" "<<ptr<<" "<<ptr2<<endl;
	
	// print value of i 
	cout<<i<<" "<<*ptr<<" "<<**ptr2<<endl;
	
	// print the adress of i 
	cout<<&i<<" "<<ptr<<" "<<*ptr2<<endl;
	
	// print the adress of ptr
	cout<<&ptr<<" "<<ptr2<<endl;
	
	// print the address of ptr2
	cout<<&ptr2;
	
	*/
	
	cout<<"before "<<i<<endl;
	cout<<"before "<<ptr<<endl;
	cout<<"before "<<ptr2<<endl;
	update(ptr2);
	cout<<"after "<<i<<endl;
	cout<<"after "<<ptr<<endl;
	cout<<"after "<<ptr2<<endl;
	
	return 0;
}
