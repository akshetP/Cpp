// Implement function pointers in C++ using threading  
#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findOdd(ull start, ull end){
    for(ull i = start; i <= end; ++i){
        if((i & 1) == 1){
            OddSum += i;
        }
    }
}

void findEven(ull start, ull end){
    for(ull i = start; i <= end; ++i){
        if((i & 1) == 0){
            EvenSum += i;
        }
    }
}

int main(){
    ull start = 0, end = 1900000000;

    auto startTime = high_resolution_clock::now();

    // With threading
    std::thread t1(findOdd, start, end);
    std::thread t2(findEven, start, end);

    t1.join();
    t2.join();

    // Without threading
    // findOdd(start, end);
    // findEven(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << OddSum << endl;
    cout << EvenSum << endl;
    cout << "Time taken: " << duration.count()/1000000 << " seconds" << endl;

    return 0;
}
