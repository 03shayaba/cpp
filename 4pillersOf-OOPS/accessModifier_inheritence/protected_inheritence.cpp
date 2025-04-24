#include<iostream>
using namespace std;
class Parent {
    public:
        int x = 10;
    protected:
        int y = 20;
    private:
        int z = 30;
    };
    
    class Child : protected Parent {  // Protected Inheritance
    public:
        void show() {
            cout << "x = " << x << endl;  // ✅ Accessible (Becomes Protected)
            cout << "y = " << y << endl;  // ✅ Accessible (Protected)
        }
    };
    
    int main() {
        Child obj;
        obj.show();
        // cout << obj.x; ❌ Not accessible (Now Protected)
        return 0;
    }
    