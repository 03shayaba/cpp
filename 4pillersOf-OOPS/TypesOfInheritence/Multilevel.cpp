#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "I am the Grandparent" << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "I am the Parent" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "I am the Child" << endl;
    }
};

int main() {
    Child obj;
    obj.showGrandparent();
    obj.showParent();
    obj.showChild();
    return 0;
}
