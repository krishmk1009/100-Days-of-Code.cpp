#include <iostream>
using namespace std;

int main(){
	
	
	int num = 5;
	cout<<num<<endl;
	cout<<&num<<endl;   // & num means the address of num value
	
	int *ptr = &num;   // this will create a block in mem , which holds the add of num;
	
	cout<<ptr<<endl;  // printing the adress of num / printing the value inside the ptr box.
	
	cout<<*ptr<<endl; // printing the value of num / value of the content at the address presnet in ptr block;
	
	
	cout<<sizeof(ptr)<<endl;  // print the size of the adress which is always 8
	cout<<sizeof(*ptr)<<endl; // printing the size of the num / which is 4 in case of int data type.
	
	
	cout<<endl;
	
	int i = 9;
	int *add =0;
	add = &i;		// asssigning the address of i in add pointer;
	
	cout<<add<<endl;   // printing the address of i / value at the pointer add
	cout<<*add<<endl;  // printing the value of i 
	
	
	int a = 10;
	int *aPtr = &a;
	
	cout<<"before "<<a<<endl;
	(*aPtr)++;    		// this increases the value of i // increment the value which is located at the adress
	cout<<"after "<<a<<endl;
	
	int c = 10;
	int *cptr = &c;
	int *dptr = cptr; 	// copy the pointer
	
	cout<<cptr<<" "<<dptr<<endl;
	cout<<*cptr<<" "<<*dptr<<endl;
	
	cout<<endl;
	
	cout<<cptr<<endl;
	cptr+=4;   	// increment the address by the value of data type (if int then 4 will be added to the adress )
	cout<<cptr<<endl;
	cout<<*cptr<<endl; // after incrementn , the address will be pointing towards the next integer which has a mapped with this address
	return 0;
}
