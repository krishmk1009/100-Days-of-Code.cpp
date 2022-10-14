#include <iostream>
#include <map>
using namespace std;


int main(){
    
    
    int arr[] = {4,3,6,9,12,3};
    int n = 6;
    map<int,int,greater<int>> mp;
    
    for(int i = 0 ; i<n;i++){
        mp.insert({arr[i] , i}); 
    }
    
    map<int,int>:: iterator rt;
    
    
    for(auto rt = mp.begin() ; rt!=mp.end() ; rt++){
        cout<<rt->first<<" => "<<rt->second<<endl;
    }
    return 0;
}
