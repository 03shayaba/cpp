#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {  // Virtual Inheritance
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {  // Virtual Inheritance
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();  // ✅ No ambiguity due to virtual inheritance
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
