#include<iostream>
using namespace std;

int main(){
    int a;
    a = 12;
    cout << "Size of int: " << sizeof(a) << endl;

    float b;
    b = 12.5;
    cout << "Size of float: " << sizeof(b) << endl;

    char c;
    c = 'A';
    cout << "Size of char: " << sizeof(c) << endl;

    bool d;
    d = true;
    cout << "Size of bool: " << sizeof(d) << endl;

    short int si;
    si = 12;
    cout << "Size of short int: " << sizeof(si) << endl;

    long int li;
    li = 12;
    cout << "Size of long int: " << sizeof(li) << endl;
}