#include <iostream>
#include <thread>

using namespace std;

int myAmount = 0;




void addMoney(){
    for(int i = 0; i<1000000; i++){
         myAmount+=1;
    }
   
}

int main(){

    thread t1(addMoney);
    thread t2(addMoney);

    t1.join();
    t2.join();
cout<<myAmount;


    return 0;
}
