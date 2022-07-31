#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int myAmount = 0;
mutex m;




void addMoney(){
    for(int i = 0; i<1000000; i++){
        m.lock();
         myAmount+=1;
         m.unlock();
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
