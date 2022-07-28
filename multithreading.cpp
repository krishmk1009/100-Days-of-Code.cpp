#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void task1(){

    for(int i=0;i<10;i++){
        sleep(1);
        cout<<"thread1 : "<<i<<endl;
        fflush(stdout);
    }
}

void task2(){
     for(int i=0;i<10;i++){
        sleep(1);
        cout<<"thread2: "<<i<<endl;
        fflush(stdout);
    }
}


int main(){

    thread t1(task1);
    thread t2(task2);

t1.join();
t2.join();

    return 0;
    
}
