#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "I am the Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "I am the Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.show();    // ✅ Inherited function
    obj.display(); // ✅ Child function
    return 0;
}
