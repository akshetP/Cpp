#include<iostream>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout << "Default Constructor" << endl;
    } 

    student(string s, int a, int g){
        name = s;
        age = a;
        gender = g;
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout << name << endl;
    }

    void printInfo(){
        cout << "Name= " << name << endl;
        cout << "Age= " << age << endl;
        cout << "Gender= " << gender << endl;
    }
};

int main(){
    // student arr[3];
    // for(int i = 0; i < 3; i++){
    //     string s;
    //     cout << "Name: ";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "Age: ";
    //     cin >> arr[i].age;
    //     cout << "Gender:";
    //     cin >> arr[i].gender;
    // }

    // for(int i = 0; i < 3; i++){
    //     arr[i].printInfo();
    // }

    student a("Saksham", 22, 0);
    a.printInfo();

    cout << "-------------------" << endl;

    student b;
    b.printInfo();

    cout << "-------------------" << endl;

    // copy constructor
    student c = a;
    c.printInfo();

    cout << "-------------------" << endl;

    return 0;
}