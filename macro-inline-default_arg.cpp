#include <iostream>
using namespace std;

//macros
//#define PI 3.14
//int main(){
//	
//	double area = PI * PI *2;
//	cout<<area;
//	return 0;
//}

//inline function
/*
 inline int  Greater(int& a , int& b){
	return (a>b) ? a : b;
}
int main(){
	
	
	int a=2 ,b=3;
	
	cout<<Greater(a,b);
	return 0 ;
}

*/

//default arg
void print(int arr[],int n,int start = 0){
	for(int i = start ; i<n;i++){
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[] = {1,2,3,4,5};
	print(arr,5);
	cout<<endl;
	print(arr,5,2);
	return 0;
}
