#include <iostream>
using namespace std;

class Hero {
public:
    int health;

    // Parameterized Constructor
    Hero(int h) {
        health = h;
    }

    // Copy Constructor
    Hero(const Hero &obj) {
        cout << "Copy Constructor Called!" << endl;
        health = obj.health; // Copy health from existing object
    }

    void showHealth() {
        cout << "Health: " << health << endl;
    }
};

int main() {
    Hero h1(90);  // Normal constructor call
    Hero h2 = h1; // 👈 Copy Constructor (h2 is a copy of h1)

    h1.showHealth();
    h2.showHealth();

    return 0;
}
