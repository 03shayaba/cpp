#include <iostream>
using namespace std;

class Parent {
public:
    int x = 10;
protected:
    int y = 20;
private:
    int z = 30;
};

class Child : public Parent {  // Public Inheritance
public:
    void show() {
        cout << "x = " << x << endl;  // ✅ Accessible (Public)
        cout << "y = " << y << endl;  // ✅ Accessible (Protected)
        // cout << "z = " << z << endl;  ❌ Not Accessible (Private)
    }
};

int main() {
    Child obj;
    obj.show();
    cout << "Accessing x from main: " << obj.x << endl;  // ✅ Accessible
    // cout << obj.y; ❌ Not accessible (Protected)
    return 0;
}
