#include<iostream>
using namespace std;

int second_largest(int arr[], int arr_size)
  {
   int i, first, second;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  
    first = second = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            
            second = arr[i];
        }
  
        
  
      
}
return second;
}


int main(){
	int arr[]={ 7,15,63,9,2,8,4};
	cout<<second_largest(arr,7);
	return 0;
}
