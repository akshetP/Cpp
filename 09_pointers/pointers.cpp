#include<iostream>
using namespace std;

int main(){
    cout<<"-------------------\n";
    cout<<"Pointers\n";
    int a = 10;
    int *aptr;
    aptr = &a;
    cout<<&a<<endl; // Address of a
    cout<<aptr<<endl; // Address of a
    cout<<*aptr<<endl; // Dereferencing

    cout<<"-------------------\n";
    cout<<"Pointers\n";

    int b = 20;
    int *bptr = &b;
    cout<<*bptr<<endl; // Dereferencing
    *bptr = 30;
    cout<<b<<endl; // Value of b

    cout<<"-------------------\n";
    cout<<"Pointer arithmetic\n";

    int arr[] = {10, 20, 30};
    int *arrptr = arr;
    cout<<*arrptr<<endl; // 10
    cout<<*(arrptr + 1)<<endl; // 20
    cout<<*(arrptr + 2)<<endl; // 30

    cout<<"-------------------\n";
    cout<<"Pointer to Pointer\n";

    int **pptr = &bptr;
    cout<<**pptr<<endl; // 30

}