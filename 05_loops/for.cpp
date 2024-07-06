#include<iostream>
using namespace std;
// Print table of a number
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}