#include <iostream>
using namespace std;


bool binarySearch(int *arr, int s, int e, int k){
    // base case
    if(s>e){
        return false ;

    }
    int mid = s + (e-s)/2;
    if(arr[mid] == k){
        return true;
    }


    // recursion case

    if(k>arr[mid]){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[] = {4, 2, 4, 5, 6, 7};
int key = 18;
int size = 6;
    cout<<"Key is present or not : "<<binarySearch(arr,0,size-1,key);

    return 0;
}