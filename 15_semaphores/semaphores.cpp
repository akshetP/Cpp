// implement a basic semaphore using mutex and condition variable
// semaphore is a synchronization object that controls access by multiple processes to a common resource in a parallel programming environment.
#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

std::mutex m;
std::condition_variable cv;
bool ready = false;

void print_id(int id){
    std::unique_lock<std::mutex> lck(m);
    while(!ready) cv.wait(lck);
    cout << "thread " << id << endl;
}

void go(){
    std::unique_lock<std::mutex> lck(m);
    ready = true;
    cv.notify_all();
}

int main(){
    thread threads[10];
    for(int i = 0; i < 10; ++i){
        threads[i] = thread(print_id, i);
    }

    cout << "10 threads ready" << endl;
    go();
}