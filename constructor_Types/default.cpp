#include <iostream>
using namespace std;

class Hero {
public:
    int health;

    // Default Constructor
    Hero() {
        cout << "Default Constructor Called!" << endl;
        health = 100;  // Default value
    }

    void showHealth() {
        cout << "Health: " << health << endl;
    }
};

int main() {
    Hero h1; // 👈 Constructor automatically called
    h1.showHealth();
    return 0;
}
