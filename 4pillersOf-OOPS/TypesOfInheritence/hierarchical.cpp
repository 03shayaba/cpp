#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "I am the Parent" << endl;
    }
};

class Child1 : public Parent {
public:
    void showChild1() {
        cout << "I am Child 1" << endl;
    }
};

class Child2 : public Parent {
public:
    void showChild2() {
        cout << "I am Child 2" << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.show();    // ✅ Inherited
    obj1.showChild1();

    obj2.show();    // ✅ Inherited
    obj2.showChild2();

    return 0;
}
