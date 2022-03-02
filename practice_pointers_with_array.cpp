#include <iostream>
using namespace std;

int main()
{
	
	/*
	int arr[10]={04,5,9};
	cout<<arr<<endl; //address of array from where the 1st block get start
	cout<<arr[0]<<endl;
	cout<<&arr[0]<<endl;   //this will give theadress of the first block of array
	
	
	cout<<endl;
	
	cout<<*arr<<endl;
	cout<<*arr+2<<endl;
	cout<<*(arr+1)<<endl;
	cout<<*(arr+2)<<endl;  //equalt to arr[2]
	
	*/
	
	
	
	int temp[10];
	int *ptr = &temp[0];
	/*
	cout<<sizeof(temp)<<endl;   // ans =40;
		
	;
	cout<<sizeof(*ptr)<<endl;  // ans =4; 
	cout<<sizeof(&ptr)<<endl;  // ans =8; 
	cout<<sizeof(&temp)<<endl;  // ans =8; 
	*/
	
	
	
//	temp = temp+1;  this will give error bcz you r trying to increment its address
ptr = ptr + 1;  // this will not give error bcz we r actually incrementing its value bcz it is storing the adress as a value;

//&ptr = &ptr + 1;   // this will also give error similar to temp = temp+1

char arr[6] = "abcde";
char *p = &arr[0];
cout<<p<<endl;    // this will not print the adress , it will print the content

cout<<arr<<endl;  // this will print the content again , not the address

	
	return 0;
}
