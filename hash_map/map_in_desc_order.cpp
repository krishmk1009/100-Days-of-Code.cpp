#include <iostream>
#include <map>
using namespace std;


int main(){
    
    
    int arr[] = {4,3,6,9,12,3};
    int n = 6;
    map<int,int> mp;
    
    for(int i = 0 ; i<n;i++){
        mp.insert({arr[i] , i}); 
    }
    
    map<int,int>:: iterator rt;
    
    
    for(auto rt = mp.rbegin() ; rt!=mp.rend() ; rt++){
        cout<<rt->first<<" => "<<rt->second<<endl;
    }
    return 0;
}
