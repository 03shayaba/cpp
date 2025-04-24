#include <iostream>
using namespace std;

class Hero {
public:
    int health;

    // Parameterized Constructor
    Hero(int h) {
        cout << "Parameterized Constructor Called!" << endl;
        health = h;
    }

    void showHealth() {
        cout << "Health: " << health << endl;
    }
};

int main() {
    Hero h1(80); // 👈 Pass value to constructor
    h1.showHealth();
    
    Hero h2(50); // 👈 Different value
    h2.showHealth();

    return 0;
}
