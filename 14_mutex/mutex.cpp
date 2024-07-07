// Mutex means mutual exclusion. It is a synchronization primitive that is used to control access to a shared resource. 
// What is race condition? Race condition is a situation in which two or more threads or processes are reading or writing some shared data, and the final result depends on the timing of how the threads are scheduled.
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int myAmount = 0;
std::mutex m;

void addMoney(){
    m.lock();
    ++myAmount;
    m.unlock();
}

int main(){
    thread t1(addMoney);
    thread t2(addMoney);

    t1.join();
    t2.join();


    cout << myAmount << endl;

    return 0;
}