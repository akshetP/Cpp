#include<iostream>
using namespace std;

// Implement runtime polymorphism
class Base{
    public:
        virtual void display(){
            cout << "Display of Base" << endl;
        }
};

class Derived: public Base{
    public:
        void display(){
            cout << "Display of Derived" << endl;
        }
};

int main(){
    Base *basePointer;
    Base b;
    Derived d;
    basePointer = &b;
    basePointer->display();
    basePointer = &d;
    basePointer->display();
    return 0;
}