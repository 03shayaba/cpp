#include <iostream>
using namespace std;

class Father {
public:
    void showFather() {
        cout << "I am the Father" << endl;
    }
};

class Mother {
public:
    void showMother() {
        cout << "I am the Mother" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "I am the Child" << endl;
    }
};

int main() {
    Child obj;
    obj.showFather();
    obj.showMother();
    obj.showChild();
    return 0;
}
