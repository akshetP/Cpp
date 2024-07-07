// impelement detached thread in C++
#include <iostream>
#include <thread>

// Function to be executed in a separate thread
void threadFunction(int threadId) {
    std::cout << "Thread " << threadId << " is running." << std::endl;
}

int main() {
    // Create a thread using a function pointer
    std::thread t1(threadFunction, 1);

    // Create a thread using a lambda function
    std::thread t2([](int threadId) {
        std::cout << "Thread " << threadId << " is running." << std::endl;
    }, 2);

    // Detach the threads
    t1.detach();
    t2.detach();

    // Wait for the threads to finish
    // t1.join();
    // t2.join();

    return 0;
}