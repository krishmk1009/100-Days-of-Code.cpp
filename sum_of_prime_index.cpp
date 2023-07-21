#include <iostream>
using namespace std;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 

    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 

    return true; 
} 
int sumOf(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        if(isPrime(i)){
            ans+= arr[i];
        }
    }

    return ans;
}
int main()
{

    int arr[] = {10, -12, 2, 5, 3, 15, 17, 21, -3, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = sumOf(arr, n);
    cout << ans;

   
    return 0;
}
