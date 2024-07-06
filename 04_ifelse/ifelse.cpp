#include<iostream>
using namespace std;
// Find maximum of three numbers
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        if(a > c){
            cout << a << " is maximum" << endl;
        }else{
            cout << c << " is maximum" << endl;
        }
    }else{
        if(b > c){
            cout << b << " is maximum" << endl;
        }else{
            cout << c << " is maximum" << endl;
        }
    }
    return 0;
}