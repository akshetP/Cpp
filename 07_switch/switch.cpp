// multiple languages robot
#include <iostream>
using namespace std;

int main(){
    int language;
    cout << "Enter a number for language: ";
    cin >> language;
    switch(language){
        case 1:
            cout << "Hello World" << endl;
            break;
        case 2:
            cout << "Hola Mundo" << endl;
            break;
        case 3:
            cout << "Bonjour le monde" << endl;
            break;
        case 4:
            cout << "Hallo Welt" << endl;
            break;
        case 5:
            cout << "Ciao mondo" << endl;
            break;
        default:
            cout << "Language not supported" << endl;
    }
    return 0;
}